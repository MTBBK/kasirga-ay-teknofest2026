from ai_edge_litert.interpreter import Interpreter
import numpy as np

model_path = "tflite-micro/tensorflow/lite/micro/examples/micro_speech/models/micro_speech_quantized.tflite"
interpreter = Interpreter(model_path=model_path)
interpreter.allocate_tensors()
details = interpreter.get_tensor_details()

for tensor in details:
    if 'weights' in tensor['name']:

        data = interpreter.get_tensor(tensor['index'])
        name = tensor['name'].replace('/', '_')

        if data.shape == (4, 4000):
            lines = []
            for i in range(4000):
                b0 = int(data[0][i]) & 0xFF
                b1 = int(data[1][i]) & 0xFF
                b2 = int(data[2][i]) & 0xFF
                b3 = int(data[3][i]) & 0xFF
                word = (b3 << 24) | (b2 << 16) | (b1 << 8) | b0
                lines.append(f"{word:08X}")
            filename = name + ".hex"
            with open(filename, "w") as f:
                f.write("\n".join(lines))

        else:
            flat_data = data.flatten()
            hex_data = [f"{x:02X}" for x in flat_data.astype(np.uint8)]
            filename = name + ".hex"
            with open(filename, "w") as f:
                f.write("\n".join(hex_data))
