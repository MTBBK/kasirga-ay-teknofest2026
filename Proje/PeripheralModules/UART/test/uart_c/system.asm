
system.elf:     file format elf32-littleriscv


Disassembly of section .text:

00000000 <_start>:
   0:	00005137          	lui	sp,0x5
   4:	2011                	jal	8 <main>

00000006 <end>:
   6:	a001                	j	6 <end>

00000008 <main>:
   8:	1101                	addi	sp,sp,-32 # 4fe0 <uart_get_char+0x4e82>
   a:	ce06                	sw	ra,28(sp)
   c:	cc22                	sw	s0,24(sp)
   e:	1000                	addi	s0,sp,32
  10:	000e1537          	lui	a0,0xe1
  14:	289d                	jal	8a <uart_init>
  16:	04f00513          	li	a0,79
  1a:	205d                	jal	c0 <uart_send_char>
  1c:	04b00513          	li	a0,75
  20:	2045                	jal	c0 <uart_send_char>
  22:	4529                	li	a0,10
  24:	2871                	jal	c0 <uart_send_char>
  26:	04b00513          	li	a0,75
  2a:	2859                	jal	c0 <uart_send_char>
  2c:	04100513          	li	a0,65
  30:	2841                	jal	c0 <uart_send_char>
  32:	05300513          	li	a0,83
  36:	2069                	jal	c0 <uart_send_char>
  38:	04900513          	li	a0,73
  3c:	2051                	jal	c0 <uart_send_char>
  3e:	05200513          	li	a0,82
  42:	28bd                	jal	c0 <uart_send_char>
  44:	04700513          	li	a0,71
  48:	28a5                	jal	c0 <uart_send_char>
  4a:	04100513          	li	a0,65
  4e:	288d                	jal	c0 <uart_send_char>
  50:	02d00513          	li	a0,45
  54:	20b5                	jal	c0 <uart_send_char>
  56:	04100513          	li	a0,65
  5a:	209d                	jal	c0 <uart_send_char>
  5c:	05900513          	li	a0,89
  60:	2085                	jal	c0 <uart_send_char>
  62:	fe042623          	sw	zero,-20(s0)
  66:	a031                	j	72 <main+0x6a>
  68:	fec42783          	lw	a5,-20(s0)
  6c:	0785                	addi	a5,a5,1
  6e:	fef42623          	sw	a5,-20(s0)
  72:	fec42703          	lw	a4,-20(s0)
  76:	0007a7b7          	lui	a5,0x7a
  7a:	11f78793          	addi	a5,a5,287 # 7a11f <uart_get_char+0x79fc1>
  7e:	fee7d5e3          	bge	a5,a4,68 <main+0x60>
  82:	02e00513          	li	a0,46
  86:	282d                	jal	c0 <uart_send_char>
  88:	bfe9                	j	62 <main+0x5a>

0000008a <uart_init>:
  8a:	7179                	addi	sp,sp,-48
  8c:	d622                	sw	s0,44(sp)
  8e:	1800                	addi	s0,sp,48
  90:	fca42e23          	sw	a0,-36(s0)
  94:	05f5e7b7          	lui	a5,0x5f5e
  98:	10078713          	addi	a4,a5,256 # 5f5e100 <uart_get_char+0x5f5dfa2>
  9c:	fdc42783          	lw	a5,-36(s0)
  a0:	02f757b3          	divu	a5,a4,a5
  a4:	fef42623          	sw	a5,-20(s0)
  a8:	6795                	lui	a5,0x5
  aa:	fec42703          	lw	a4,-20(s0)
  ae:	c398                	sw	a4,0(a5)
  b0:	6795                	lui	a5,0x5
  b2:	0791                	addi	a5,a5,4 # 5004 <uart_get_char+0x4ea6>
  b4:	0007a023          	sw	zero,0(a5)
  b8:	0001                	nop
  ba:	5432                	lw	s0,44(sp)
  bc:	6145                	addi	sp,sp,48
  be:	8082                	ret

000000c0 <uart_send_char>:
  c0:	1101                	addi	sp,sp,-32
  c2:	ce22                	sw	s0,28(sp)
  c4:	1000                	addi	s0,sp,32
  c6:	87aa                	mv	a5,a0
  c8:	fef407a3          	sb	a5,-17(s0)
  cc:	0001                	nop
  ce:	6795                	lui	a5,0x5
  d0:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4eb2>
  d2:	439c                	lw	a5,0(a5)
  d4:	8b85                	andi	a5,a5,1
  d6:	ffe5                	bnez	a5,ce <uart_send_char+0xe>
  d8:	6795                	lui	a5,0x5
  da:	07b1                	addi	a5,a5,12 # 500c <uart_get_char+0x4eae>
  dc:	fef44703          	lbu	a4,-17(s0)
  e0:	c398                	sw	a4,0(a5)
  e2:	6795                	lui	a5,0x5
  e4:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4eb2>
  e6:	4705                	li	a4,1
  e8:	c398                	sw	a4,0(a5)
  ea:	0001                	nop
  ec:	6795                	lui	a5,0x5
  ee:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4eb2>
  f0:	439c                	lw	a5,0(a5)
  f2:	8b91                	andi	a5,a5,4
  f4:	dfe5                	beqz	a5,ec <uart_send_char+0x2c>
  f6:	6795                	lui	a5,0x5
  f8:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4eb2>
  fa:	0007a023          	sw	zero,0(a5)
  fe:	0001                	nop
 100:	4472                	lw	s0,28(sp)
 102:	6105                	addi	sp,sp,32
 104:	8082                	ret

00000106 <uart_send_string>:
 106:	1101                	addi	sp,sp,-32
 108:	ce06                	sw	ra,28(sp)
 10a:	cc22                	sw	s0,24(sp)
 10c:	1000                	addi	s0,sp,32
 10e:	fea42623          	sw	a0,-20(s0)
 112:	a821                	j	12a <uart_send_string+0x24>
 114:	fec42783          	lw	a5,-20(s0)
 118:	0007c783          	lbu	a5,0(a5)
 11c:	853e                	mv	a0,a5
 11e:	374d                	jal	c0 <uart_send_char>
 120:	fec42783          	lw	a5,-20(s0)
 124:	0785                	addi	a5,a5,1
 126:	fef42623          	sw	a5,-20(s0)
 12a:	fec42783          	lw	a5,-20(s0)
 12e:	0007c783          	lbu	a5,0(a5)
 132:	f3ed                	bnez	a5,114 <uart_send_string+0xe>
 134:	0001                	nop
 136:	0001                	nop
 138:	40f2                	lw	ra,28(sp)
 13a:	4462                	lw	s0,24(sp)
 13c:	6105                	addi	sp,sp,32
 13e:	8082                	ret

00000140 <char_received>:
 140:	1141                	addi	sp,sp,-16
 142:	c622                	sw	s0,12(sp)
 144:	0800                	addi	s0,sp,16
 146:	6795                	lui	a5,0x5
 148:	07c1                	addi	a5,a5,16 # 5010 <uart_get_char+0x4eb2>
 14a:	439c                	lw	a5,0(a5)
 14c:	8b89                	andi	a5,a5,2
 14e:	c399                	beqz	a5,154 <char_received+0x14>
 150:	4785                	li	a5,1
 152:	a011                	j	156 <char_received+0x16>
 154:	4781                	li	a5,0
 156:	853e                	mv	a0,a5
 158:	4432                	lw	s0,12(sp)
 15a:	0141                	addi	sp,sp,16
 15c:	8082                	ret

0000015e <uart_get_char>:
 15e:	1141                	addi	sp,sp,-16
 160:	c622                	sw	s0,12(sp)
 162:	0800                	addi	s0,sp,16
 164:	6795                	lui	a5,0x5
 166:	07a1                	addi	a5,a5,8 # 5008 <uart_get_char+0x4eaa>
 168:	439c                	lw	a5,0(a5)
 16a:	0ff7f793          	zext.b	a5,a5
 16e:	853e                	mv	a0,a5
 170:	4432                	lw	s0,12(sp)
 172:	0141                	addi	sp,sp,16
 174:	8082                	ret
