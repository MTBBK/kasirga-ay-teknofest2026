from ai_edge_litert.interpreter import Interpreter
import numpy as np

interpreter = Interpreter(model_path="tflite-micro/tensorflow/lite/micro/examples/micro_speech/models/micro_speech_quantized.tflite")
interpreter.allocate_tensors()

for tensor in interpreter.get_tensor_details():
    if 'bias' in tensor['name']:
        data = interpreter.get_tensor(tensor['index'])
        hex_data = [f"{int(x) & 0xFFFFFFFF:08X}" for x in data.flatten()]
        
        filename = tensor['name'].replace('/', '_') + ".hex"
        with open(filename, "w") as f:
            f.write("\n".join(hex_data))
        print(f"bias kaydedildi: {filename}")
