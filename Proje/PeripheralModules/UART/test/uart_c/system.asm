
system.elf:     file format elf32-littleriscv


Disassembly of section .text:

00000000 <_start>:
   0:	00005137          	lui	sp,0x5
   4:	2011                	jal	8 <main>

00000006 <end>:
   6:	a001                	j	6 <end>

00000008 <main>:
   8:	1101                	addi	sp,sp,-32 # 4fe0 <uart_get_char+0x4e76>
   a:	ce06                	sw	ra,28(sp)
   c:	cc22                	sw	s0,24(sp)
   e:	1000                	addi	s0,sp,32
  10:	000e1537          	lui	a0,0xe1
  14:	289d                	jal	8a <uart_init>
  16:	04f00513          	li	a0,79
  1a:	206d                	jal	c4 <uart_send_char>
  1c:	04b00513          	li	a0,75
  20:	2055                	jal	c4 <uart_send_char>
  22:	4529                	li	a0,10
  24:	2045                	jal	c4 <uart_send_char>
  26:	04b00513          	li	a0,75
  2a:	2869                	jal	c4 <uart_send_char>
  2c:	04100513          	li	a0,65
  30:	2851                	jal	c4 <uart_send_char>
  32:	05300513          	li	a0,83
  36:	2079                	jal	c4 <uart_send_char>
  38:	04900513          	li	a0,73
  3c:	2061                	jal	c4 <uart_send_char>
  3e:	05200513          	li	a0,82
  42:	2049                	jal	c4 <uart_send_char>
  44:	04700513          	li	a0,71
  48:	28b5                	jal	c4 <uart_send_char>
  4a:	04100513          	li	a0,65
  4e:	289d                	jal	c4 <uart_send_char>
  50:	02d00513          	li	a0,45
  54:	2885                	jal	c4 <uart_send_char>
  56:	04100513          	li	a0,65
  5a:	20ad                	jal	c4 <uart_send_char>
  5c:	05900513          	li	a0,89
  60:	2095                	jal	c4 <uart_send_char>
  62:	fe042623          	sw	zero,-20(s0)
  66:	a031                	j	72 <main+0x6a>
  68:	fec42783          	lw	a5,-20(s0)
  6c:	0785                	addi	a5,a5,1
  6e:	fef42623          	sw	a5,-20(s0)
  72:	fec42703          	lw	a4,-20(s0)
  76:	0007a7b7          	lui	a5,0x7a
  7a:	11f78793          	addi	a5,a5,287 # 7a11f <uart_get_char+0x79fb5>
  7e:	fee7d5e3          	bge	a5,a4,68 <main+0x60>
  82:	02e00513          	li	a0,46
  86:	283d                	jal	c4 <uart_send_char>
  88:	bfe9                	j	62 <main+0x5a>

0000008a <uart_init>:
  8a:	7179                	addi	sp,sp,-48
  8c:	d606                	sw	ra,44(sp)
  8e:	d422                	sw	s0,40(sp)
  90:	1800                	addi	s0,sp,48
  92:	fca42e23          	sw	a0,-36(s0)
  96:	05f5e7b7          	lui	a5,0x5f5e
  9a:	10078713          	addi	a4,a5,256 # 5f5e100 <uart_get_char+0x5f5df96>
  9e:	fdc42783          	lw	a5,-36(s0)
  a2:	02f757b3          	divu	a5,a4,a5
  a6:	fef42623          	sw	a5,-20(s0)
  aa:	6795                	lui	a5,0x5
  ac:	fec42703          	lw	a4,-20(s0)
  b0:	c398                	sw	a4,0(a5)
  b2:	6795                	lui	a5,0x5
  b4:	0791                	addi	a5,a5,4 # 5004 <uart_get_char+0x4e9a>
  b6:	0007a023          	sw	zero,0(a5)
  ba:	0001                	nop
  bc:	50b2                	lw	ra,44(sp)
  be:	5422                	lw	s0,40(sp)
  c0:	6145                	addi	sp,sp,48
  c2:	8082                	ret

000000c4 <uart_send_char>:
  c4:	1101                	addi	sp,sp,-32
  c6:	ce06                	sw	ra,28(sp)
  c8:	cc22                	sw	s0,24(sp)
  ca:	1000                	addi	s0,sp,32
  cc:	87aa                	mv	a5,a0
  ce:	fef407a3          	sb	a5,-17(s0)
  d2:	0001                	nop
  d4:	6795                	lui	a5,0x5
  d6:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ea6>
  d8:	439c                	lw	a5,0(a5)
  da:	8b85                	andi	a5,a5,1
  dc:	ffe5                	bnez	a5,d4 <uart_send_char+0x10>
  de:	6795                	lui	a5,0x5
  e0:	07b1                	addi	a5,a5,12 # 500c <uart_get_char+0x4ea2>
  e2:	fef44703          	lbu	a4,-17(s0)
  e6:	c398                	sw	a4,0(a5)
  e8:	6795                	lui	a5,0x5
  ea:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ea6>
  ec:	4705                	li	a4,1
  ee:	c398                	sw	a4,0(a5)
  f0:	0001                	nop
  f2:	6795                	lui	a5,0x5
  f4:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ea6>
  f6:	439c                	lw	a5,0(a5)
  f8:	8b91                	andi	a5,a5,4
  fa:	dfe5                	beqz	a5,f2 <uart_send_char+0x2e>
  fc:	6795                	lui	a5,0x5
  fe:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ea6>
 100:	0007a023          	sw	zero,0(a5)
 104:	0001                	nop
 106:	40f2                	lw	ra,28(sp)
 108:	4462                	lw	s0,24(sp)
 10a:	6105                	addi	sp,sp,32
 10c:	8082                	ret

0000010e <uart_send_string>:
 10e:	1101                	addi	sp,sp,-32
 110:	ce06                	sw	ra,28(sp)
 112:	cc22                	sw	s0,24(sp)
 114:	1000                	addi	s0,sp,32
 116:	fea42623          	sw	a0,-20(s0)
 11a:	a821                	j	132 <uart_send_string+0x24>
 11c:	fec42783          	lw	a5,-20(s0)
 120:	0007c783          	lbu	a5,0(a5)
 124:	853e                	mv	a0,a5
 126:	3f79                	jal	c4 <uart_send_char>
 128:	fec42783          	lw	a5,-20(s0)
 12c:	0785                	addi	a5,a5,1
 12e:	fef42623          	sw	a5,-20(s0)
 132:	fec42783          	lw	a5,-20(s0)
 136:	0007c783          	lbu	a5,0(a5)
 13a:	f3ed                	bnez	a5,11c <uart_send_string+0xe>
 13c:	0001                	nop
 13e:	0001                	nop
 140:	40f2                	lw	ra,28(sp)
 142:	4462                	lw	s0,24(sp)
 144:	6105                	addi	sp,sp,32
 146:	8082                	ret

00000148 <char_received>:
 148:	1141                	addi	sp,sp,-16
 14a:	c606                	sw	ra,12(sp)
 14c:	c422                	sw	s0,8(sp)
 14e:	0800                	addi	s0,sp,16
 150:	6795                	lui	a5,0x5
 152:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ea6>
 154:	439c                	lw	a5,0(a5)
 156:	8b89                	andi	a5,a5,2
 158:	c399                	beqz	a5,15e <char_received+0x16>
 15a:	4785                	li	a5,1
 15c:	a011                	j	160 <char_received+0x18>
 15e:	4781                	li	a5,0
 160:	853e                	mv	a0,a5
 162:	40b2                	lw	ra,12(sp)
 164:	4422                	lw	s0,8(sp)
 166:	0141                	addi	sp,sp,16
 168:	8082                	ret

0000016a <uart_get_char>:
 16a:	1141                	addi	sp,sp,-16
 16c:	c606                	sw	ra,12(sp)
 16e:	c422                	sw	s0,8(sp)
 170:	0800                	addi	s0,sp,16
 172:	6795                	lui	a5,0x5
 174:	07a1                	addi	a5,a5,8 # 5008 <uart_get_char+0x4e9e>
 176:	439c                	lw	a5,0(a5)
 178:	0ff7f793          	zext.b	a5,a5
 17c:	853e                	mv	a0,a5
 17e:	40b2                	lw	ra,12(sp)
 180:	4422                	lw	s0,8(sp)
 182:	0141                	addi	sp,sp,16
 184:	8082                	ret
