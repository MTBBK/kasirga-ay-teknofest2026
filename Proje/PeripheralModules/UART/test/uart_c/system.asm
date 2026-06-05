
system.elf:     file format elf32-littleriscv


Disassembly of section .text:

00000000 <_start>:
   0:	00005137          	lui	sp,0x5
   4:	116d                	addi	sp,sp,-5 # 4ffb <uart_get_char+0x4ecb>
   6:	2011                	jal	a <main>

00000008 <end>:
   8:	a001                	j	8 <end>

0000000a <main>:
   a:	1101                	addi	sp,sp,-32
   c:	ce06                	sw	ra,28(sp)
   e:	cc22                	sw	s0,24(sp)
  10:	1000                	addi	s0,sp,32
  12:	000e1537          	lui	a0,0xe1
  16:	282d                	jal	50 <uart_init>
  18:	04f00513          	li	a0,79
  1c:	20bd                	jal	8a <uart_send_char>
  1e:	04b00513          	li	a0,75
  22:	20a5                	jal	8a <uart_send_char>
  24:	4529                	li	a0,10
  26:	2095                	jal	8a <uart_send_char>
  28:	fe042623          	sw	zero,-20(s0)
  2c:	a031                	j	38 <main+0x2e>
  2e:	fec42783          	lw	a5,-20(s0)
  32:	0785                	addi	a5,a5,1
  34:	fef42623          	sw	a5,-20(s0)
  38:	fec42703          	lw	a4,-20(s0)
  3c:	0007a7b7          	lui	a5,0x7a
  40:	11f78793          	addi	a5,a5,287 # 7a11f <uart_get_char+0x79fef>
  44:	fee7d5e3          	bge	a5,a4,2e <main+0x24>
  48:	02e00513          	li	a0,46
  4c:	283d                	jal	8a <uart_send_char>
  4e:	bfe9                	j	28 <main+0x1e>

00000050 <uart_init>:
  50:	7179                	addi	sp,sp,-48
  52:	d606                	sw	ra,44(sp)
  54:	d422                	sw	s0,40(sp)
  56:	1800                	addi	s0,sp,48
  58:	fca42e23          	sw	a0,-36(s0)
  5c:	05f5e7b7          	lui	a5,0x5f5e
  60:	10078713          	addi	a4,a5,256 # 5f5e100 <uart_get_char+0x5f5dfd0>
  64:	fdc42783          	lw	a5,-36(s0)
  68:	02f757b3          	divu	a5,a4,a5
  6c:	fef42623          	sw	a5,-20(s0)
  70:	6795                	lui	a5,0x5
  72:	fec42703          	lw	a4,-20(s0)
  76:	c398                	sw	a4,0(a5)
  78:	6795                	lui	a5,0x5
  7a:	0791                	addi	a5,a5,4 # 5004 <uart_get_char+0x4ed4>
  7c:	0007a023          	sw	zero,0(a5)
  80:	0001                	nop
  82:	50b2                	lw	ra,44(sp)
  84:	5422                	lw	s0,40(sp)
  86:	6145                	addi	sp,sp,48
  88:	8082                	ret

0000008a <uart_send_char>:
  8a:	1101                	addi	sp,sp,-32
  8c:	ce06                	sw	ra,28(sp)
  8e:	cc22                	sw	s0,24(sp)
  90:	1000                	addi	s0,sp,32
  92:	87aa                	mv	a5,a0
  94:	fef407a3          	sb	a5,-17(s0)
  98:	0001                	nop
  9a:	6795                	lui	a5,0x5
  9c:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ee0>
  9e:	439c                	lw	a5,0(a5)
  a0:	8b85                	andi	a5,a5,1
  a2:	ffe5                	bnez	a5,9a <uart_send_char+0x10>
  a4:	6795                	lui	a5,0x5
  a6:	07b1                	addi	a5,a5,12 # 500c <uart_get_char+0x4edc>
  a8:	fef44703          	lbu	a4,-17(s0)
  ac:	c398                	sw	a4,0(a5)
  ae:	6795                	lui	a5,0x5
  b0:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ee0>
  b2:	4705                	li	a4,1
  b4:	c398                	sw	a4,0(a5)
  b6:	0001                	nop
  b8:	6795                	lui	a5,0x5
  ba:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ee0>
  bc:	439c                	lw	a5,0(a5)
  be:	8b91                	andi	a5,a5,4
  c0:	dfe5                	beqz	a5,b8 <uart_send_char+0x2e>
  c2:	6795                	lui	a5,0x5
  c4:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ee0>
  c6:	0007a023          	sw	zero,0(a5)
  ca:	0001                	nop
  cc:	40f2                	lw	ra,28(sp)
  ce:	4462                	lw	s0,24(sp)
  d0:	6105                	addi	sp,sp,32
  d2:	8082                	ret

000000d4 <uart_send_string>:
  d4:	1101                	addi	sp,sp,-32
  d6:	ce06                	sw	ra,28(sp)
  d8:	cc22                	sw	s0,24(sp)
  da:	1000                	addi	s0,sp,32
  dc:	fea42623          	sw	a0,-20(s0)
  e0:	a821                	j	f8 <uart_send_string+0x24>
  e2:	fec42783          	lw	a5,-20(s0)
  e6:	0007c783          	lbu	a5,0(a5)
  ea:	853e                	mv	a0,a5
  ec:	3f79                	jal	8a <uart_send_char>
  ee:	fec42783          	lw	a5,-20(s0)
  f2:	0785                	addi	a5,a5,1
  f4:	fef42623          	sw	a5,-20(s0)
  f8:	fec42783          	lw	a5,-20(s0)
  fc:	0007c783          	lbu	a5,0(a5)
 100:	f3ed                	bnez	a5,e2 <uart_send_string+0xe>
 102:	0001                	nop
 104:	0001                	nop
 106:	40f2                	lw	ra,28(sp)
 108:	4462                	lw	s0,24(sp)
 10a:	6105                	addi	sp,sp,32
 10c:	8082                	ret

0000010e <char_received>:
 10e:	1141                	addi	sp,sp,-16
 110:	c606                	sw	ra,12(sp)
 112:	c422                	sw	s0,8(sp)
 114:	0800                	addi	s0,sp,16
 116:	6795                	lui	a5,0x5
 118:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4ee0>
 11a:	439c                	lw	a5,0(a5)
 11c:	8b89                	andi	a5,a5,2
 11e:	c399                	beqz	a5,124 <char_received+0x16>
 120:	4785                	li	a5,1
 122:	a011                	j	126 <char_received+0x18>
 124:	4781                	li	a5,0
 126:	853e                	mv	a0,a5
 128:	40b2                	lw	ra,12(sp)
 12a:	4422                	lw	s0,8(sp)
 12c:	0141                	addi	sp,sp,16
 12e:	8082                	ret

00000130 <uart_get_char>:
 130:	1141                	addi	sp,sp,-16
 132:	c606                	sw	ra,12(sp)
 134:	c422                	sw	s0,8(sp)
 136:	0800                	addi	s0,sp,16
 138:	6795                	lui	a5,0x5
 13a:	07a1                	addi	a5,a5,8 # 5008 <uart_get_char+0x4ed8>
 13c:	439c                	lw	a5,0(a5)
 13e:	0ff7f793          	zext.b	a5,a5
 142:	853e                	mv	a0,a5
 144:	40b2                	lw	ra,12(sp)
 146:	4422                	lw	s0,8(sp)
 148:	0141                	addi	sp,sp,16
 14a:	8082                	ret
