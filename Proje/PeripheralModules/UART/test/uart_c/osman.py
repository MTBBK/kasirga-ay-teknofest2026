with open("program.bin","rb") as f:
    data = f.read()

for i in range(0, len(data), 4):
    word = int.from_bytes(data[i:i+4], "little")
    print(f"{word:08x}")
