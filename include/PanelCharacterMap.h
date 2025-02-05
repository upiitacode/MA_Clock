#ifndef _PANELCHARACTERMAP_H
#define _PANELCHARACTERMAP_H

#include <ctype.h>
#include <stdint.h>

class DisplayCharacterMap{
	public:
		virtual ~DisplayCharacterMap(){};
		virtual uint16_t map(char c) = 0;
};

class ASCIICharacterMap : public DisplayCharacterMap{
	public:
		static const uint16_t Alpha[26];
		static const uint16_t Digit[10];
		virtual uint16_t map(char c);
};

#define DISP_14_SEG_A (0x1 << 2)
#define DISP_14_SEG_B (0x1 << 1)
#define DISP_14_SEG_C (0x1 << 15)
#define DISP_14_SEG_D (0x1 << 14)
#define DISP_14_SEG_E (0x1 << 9)
#define DISP_14_SEG_F (0x1 << 7)
#define DISP_14_SEG_G (0x1 << 5)
#define DISP_14_SEG_H (0x1 << 4)
#define DISP_14_SEG_J (0x1 << 13)
#define DISP_14_SEG_K (0x1 << 12)
#define DISP_14_SEG_L (0x1 << 11)
#define DISP_14_SEG_M (0x1 << 10)
#define DISP_14_SEG_N (0x1 << 3)
#define DISP_14_SEG_P (0x1 << 6)

#define DISP_14_0 (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_E | DISP_14_SEG_F)
#define DISP_14_1 (DISP_14_SEG_B | DISP_14_SEG_C)
#define DISP_14_2 (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_J | DISP_14_SEG_N | DISP_14_SEG_E | DISP_14_SEG_D)
#define DISP_14_3 (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_J | DISP_14_SEG_N | DISP_14_SEG_C | DISP_14_SEG_D)
#define DISP_14_4 (DISP_14_SEG_F | DISP_14_SEG_B | DISP_14_SEG_J | DISP_14_SEG_N | DISP_14_SEG_C)
#define DISP_14_5 (DISP_14_SEG_A | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N | DISP_14_SEG_C | DISP_14_SEG_D)
#define DISP_14_6 (DISP_14_SEG_A | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_E)
#define DISP_14_7 (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C)
#define DISP_14_8 (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N)
#define DISP_14_9 (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N)

#define DISP_14_A (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N)
#define DISP_14_B (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_G | DISP_14_SEG_L | DISP_14_SEG_J)
#define DISP_14_C (DISP_14_SEG_A | DISP_14_SEG_D | DISP_14_SEG_E | DISP_14_SEG_F)
#define DISP_14_D (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_G | DISP_14_SEG_L)
#define DISP_14_E (DISP_14_SEG_A | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_D | DISP_14_SEG_J | DISP_14_SEG_N)
#define DISP_14_F (DISP_14_SEG_A | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N)
#define DISP_14_G (DISP_14_SEG_A | DISP_14_SEG_C | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_D | DISP_14_SEG_J)
#define DISP_14_H (DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N)
#define DISP_14_I (DISP_14_SEG_A | DISP_14_SEG_D | DISP_14_SEG_G | DISP_14_SEG_L)
#define DISP_14_J (DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_E)
#define DISP_14_K (DISP_14_SEG_F | DISP_14_SEG_E | DISP_14_SEG_N | DISP_14_SEG_H | DISP_14_SEG_K)
#define DISP_14_L (DISP_14_SEG_F | DISP_14_SEG_E | DISP_14_SEG_D)
#define DISP_14_M (DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_P | DISP_14_SEG_H | DISP_14_SEG_B | DISP_14_SEG_C)
#define DISP_14_N (DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_P | DISP_14_SEG_K | DISP_14_SEG_B | DISP_14_SEG_C)
#define DISP_14_O (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_E | DISP_14_SEG_F)
#define DISP_14_P (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N)
#define DISP_14_Q (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_K)
#define DISP_14_R (DISP_14_SEG_A | DISP_14_SEG_B | DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_J | DISP_14_SEG_N | DISP_14_SEG_K)
#define DISP_14_S (DISP_14_SEG_A | DISP_14_SEG_P | DISP_14_SEG_J | DISP_14_SEG_C | DISP_14_SEG_D)
#define DISP_14_T (DISP_14_SEG_A | DISP_14_SEG_G | DISP_14_SEG_L)
#define DISP_14_U (DISP_14_SEG_B | DISP_14_SEG_C | DISP_14_SEG_D | DISP_14_SEG_E | DISP_14_SEG_F)
#define DISP_14_V (DISP_14_SEG_F | DISP_14_SEG_E | DISP_14_SEG_M | DISP_14_SEG_H)
#define DISP_14_W (DISP_14_SEG_E | DISP_14_SEG_F | DISP_14_SEG_M | DISP_14_SEG_K | DISP_14_SEG_B | DISP_14_SEG_C)
#define DISP_14_X (DISP_14_SEG_M | DISP_14_SEG_K | DISP_14_SEG_P | DISP_14_SEG_H)
#define DISP_14_Y (DISP_14_SEG_P | DISP_14_SEG_H | DISP_14_SEG_L)
#define DISP_14_Z (DISP_14_SEG_A | DISP_14_SEG_H | DISP_14_SEG_M | DISP_14_SEG_D)

#define DISP_14_SPACE (0x0000)
#define DISP_14_MINUS (0x0000)
#define DISP_14_PLUS (0x0000)

#endif// _PANELCHARACTERMAP_H
