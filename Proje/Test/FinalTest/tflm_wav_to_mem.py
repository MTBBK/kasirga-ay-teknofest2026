import sys
import numpy as np

from tflite_micro.python.tflite_micro.runtime import Interpreter

def generate_mem(wav_path, mem_path, model_path):
    # Load the TFLite Micro interpreter with the precompiled preprocessor model
    with open(model_path, 'rb') as f:
        model_data = f.read()

    interpreter = Interpreter.from_bytes(model_data)

    import librosa
    data, sr = librosa.load(wav_path, sr=16000)
    # Convert float [-1.0, 1.0] to int16
    data = (data * 32767.0).astype(np.int16)

    if len(data.shape) > 1:
        data = data[:, 0]

    # micro_speech expects 1 second of audio (16000 samples)
    if len(data) > 16000:
        data = data[:16000]
    elif len(data) < 16000:
        data = np.pad(data, (0, 16000 - len(data)))

    window_size = 480  # 30ms @ 16kHz
    window_stride = 320 # 20ms @ 16kHz

    features = np.zeros((49, 40), dtype=np.int8)

    start_index = 0
    end_index = start_index + window_size
    frame_number = 0

    while end_index <= len(data) and frame_number < 49:
        # Extract frame
        frame = data[start_index:end_index]

        # The tflm preprocessor expects shape [1, 480] of type int16
        input_data = np.expand_dims(frame, axis=0)

        interpreter.set_input(input_data, 0)
        interpreter.invoke()
        output_data = interpreter.get_output(0)

        # output_data should be [40] int8 elements
        features[frame_number] = output_data.flatten()

        start_index += window_stride
        end_index += window_stride
        frame_number += 1

    # Write to .mem
    with open(mem_path, 'w') as f:
        for val in features.flatten():
            f.write(f"{int(val) & 0xFF:02x}\n")

    print(f"Successfully processed {frame_number} frames and saved to {mem_path}")

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("Usage: python tflm_wav_to_mem.py <input.wav> <output.mem>")
        sys.exit(1)

    wav_file = sys.argv[1]
    mem_file = sys.argv[2]
    model = '/ModelFiles/audio_preprocessor_int8.tflite'

    generate_mem(wav_file, mem_file, model)
