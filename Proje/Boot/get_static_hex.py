import argparse

parser = argparse.ArgumentParser(description='Get static hex code from riscv binary file.')

parser.add_argument('--binfile' , '-bf', default='coremark_baremetal.bin', help='specify riscv binary file that is obtained by gcc objcopy')

args = parser.parse_args()
binFile = args.binfile

with open(binFile, "rb") as f:
	binData = f.read()
	word_count = (len(binData) + 3) // 4
	maxlimit = 1000000

	assert word_count < maxlimit

	assert len(binData) < 4*maxlimit
	#assert len(binData) % 4 == 0

	hexFileName = binFile[:-4] + "_static.hex"
	hexFile = open(hexFileName, 'w')

	hexFile.write("%08x\n" % word_count)

	for i in range(word_count):
			w = binData[4*i : 4*i+4]
			hexFile.write("%02x%02x%02x%02x" % (w[3], w[2], w[1], w[0]))
			hexFile.write("\n")
	
	f.close()
	hexFile.close()

