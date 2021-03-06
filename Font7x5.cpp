#include "Font7x5.h"

MiniBitmap Font7x5::GetCharacter(char character)
{
#define Char7x5(ch,p0,p1,p2,p3,p4) case ch: { static const uint8_t pattern[5] = { p0, p1, p2, p3, p4 }; return MiniBitmap(5, 7, pattern); }
#define CharDefault7x5(p0,p1,p2,p3,p4) default: { static const uint8_t pattern[5] = { p0, p1, p2, p3, p4 }; return MiniBitmap(5, 7, pattern); }

    switch (character)
    {
        Char7x5('0',
            0b0111110,
            0b1111111,
            0b1000001,
            0b1111111,
            0b0111110);

        Char7x5('1',
            0b0000000,
            0b0000100,
            0b1111110,
            0b1111111,
            0b0000000);

        Char7x5('2',
            0b1100010,
            0b1110001,
            0b1011001,
            0b1001111,
            0b1000110);

        Char7x5('3',
            0b00100010,
            0b01000001,
            0b01001001,
            0b01111111,
            0b00110110);

        Char7x5('4',
            0b0011000,
            0b0011100,
            0b0010110,
            0b1111111,
            0b1111111);

        Char7x5('5',
            0b0101111,
            0b1001111,
            0b1001001,
            0b1111001,
            0b0110001);

        Char7x5('6',
            0b0111110,
            0b1111111,
            0b1001001,
            0b1111001,
            0b0110010);

        Char7x5('7',
            0b0000001,
            0b1110001,
            0b1111101,
            0b0001111,
            0b0000011);

        Char7x5('8',
            0b0110110,
            0b1111111,
            0b1001001,
            0b1111111,
            0b0110110);

        Char7x5('9',
            0b0100110,
            0b1001111,
            0b1001001,
            0b1111111,
            0b0111110);

        Char7x5(' ',
            0,
            0,
            0,
            0,
            0);

        Char7x5(':',
            0b0000000,
            0b0110110,
            0b0110110,
            0b0000000,
            0b0000000);

        Char7x5(',',
            0b0000000,
            0b1100000,
            0b0100000,
            0b0000000,
            0b0000000);

        Char7x5('.',
            0b0000000,
            0b1100000,
            0b1100000,
            0b0000000,
            0b0000000);

        Char7x5('A',
            0b1111110,
            0b1111111,
            0b0001001,
            0b1111111,
            0b1111110);

        Char7x5('B',
            0b1111111,
            0b1111111,
            0b1001001,
            0b1111111,
            0b0110110);

        Char7x5('C',
            0b0111110,
            0b1111111,
            0b1000001,
            0b1000001,
            0b0100010);

        Char7x5('D',
            0b1111111,
            0b1111111,
            0b1000001,
            0b1111111,
            0b0111110);

        Char7x5('E',
            0b1111111,
            0b1111111,
            0b1001001,
            0b1001001,
            0b1000001);

        Char7x5('F',
            0b1111111,
            0b1111111,
            0b0001001,
            0b0001001,
            0b0000001);

        Char7x5('G',
            0b0111110,
            0b1111111,
            0b1000001,
            0b1111001,
            0b1111010);

        Char7x5('H',
            0b1111111,
            0b1111111,
            0b0001000,
            0b1111111,
            0b1111111);

        Char7x5('I',
            0b0000000,
            0b1111111,
            0b1111111,
            0b0000000,
            0b0000000);

        Char7x5('J',
            0b0100000,
            0b1000000,
            0b1000000,
            0b1111111,
            0b0111111);

        Char7x5('K',
            0b1111111,
            0b1111111,
            0b0001000,
            0b1110111,
            0b1100011);

        Char7x5('L',
            0b1111111,
            0b1111111,
            0b1000000,
            0b1000000,
            0b1000000);

        Char7x5('M',
            0b1111111,
            0b0000110,
            0b0001100,
            0b0000110,
            0b1111111);

        Char7x5('N',
            0b1111111,
            0b0000110,
            0b0001100,
            0b0011000,
            0b1111111);

        Char7x5('O',
            0b0111110,
            0b1111111,
            0b1000001,
            0b1111111,
            0b0111110);

        Char7x5('P',
            0b1111111,
            0b1111111,
            0b0001001,
            0b0001111,
            0b0000110);

        Char7x5('Q',
            0b0111110,
            0b1111111,
            0b1010001,
            0b0101111,
            0b1011110);

        Char7x5('R',
            0b1111111,
            0b1111111,
            0b0001001,
            0b1111111,
            0b1110110);

        Char7x5('S',
            0b0100110,
            0b1001111,
            0b1001001,
            0b1111001,
            0b0110010);

        Char7x5('T',
            0b0000001,
            0b1111111,
            0b1111111,
            0b0000001,
            0b0000001);

        Char7x5('U',
            0b0111111,
            0b1111111,
            0b1000000,
            0b1111111,
            0b0111111);

        Char7x5('V',
            0b0011111,
            0b0111111,
            0b1100000,
            0b0111111,
            0b0011111);

        Char7x5('W',
            0b1111111,
            0b0110000,
            0b0011000,
            0b0110000,
            0b1111111);

        Char7x5('X',
            0b1100011,
            0b1110111,
            0b0011100,
            0b1110111,
            0b1100011);

        Char7x5('Y',
            0b0100111,
            0b1001111,
            0b1001000,
            0b1111111,
            0b0111111);

        Char7x5('Z',
            0b1110001,
            0b1111001,
            0b1001101,
            0b1000111,
            0b1000011);

        Char7x5('a',
            0b0111000,
            0b1111100,
            0b1000100,
            0b1111100,
            0b1111100);

        Char7x5('b',
            0b1111111,
            0b1111111,
            0b1000100,
            0b1111100,
            0b0111000);

        Char7x5('c',
            0b0111000,
            0b1111100,
            0b1000100,
            0b1000100,
            0b0101000);

        Char7x5('d',
            0b0111000,
            0b1111100,
            0b1000100,
            0b1111111,
            0b1111111);

        Char7x5('e',
            0b0111000,
            0b1111100,
            0b1010100,
            0b1011100,
            0b1011000);

        Char7x5('f',
            0b0000100,
            0b1111110,
            0b1111111,
            0b0000101,
            0b0000001);

        Char7x5('g',
            0b1001000,
            0b1011100,
            0b1010100,
            0b1111100,
            0b0111100);

        Char7x5('h',
            0b1111111,
            0b1111111,
            0b0000100,
            0b1111100,
            0b1111000);

        Char7x5('i',
            0b0000000,
            0b1111101,
            0b1111101,
            0b0000000,
            0b0000000);

        Char7x5('j',
            0b0100000,
            0b1000000,
            0b1000000,
            0b1111101,
            0b0111101);

        Char7x5('k',
            0b1111111,
            0b1111111,
            0b0111000,
            0b1101100,
            0b1000100);

        Char7x5('l',
            0b0000000,
            0b1111111,
            0b1111111,
            0b0000000,
            0b0000000);

        Char7x5('m',
            0b1111100,
            0b0000100,
            0b1111100,
            0b0000100,
            0b1111000);

        Char7x5('n',
            0b1111100,
            0b1111100,
            0b0000100,
            0b1111100,
            0b1111000);

        Char7x5('o',
            0b0111000,
            0b1111100,
            0b1000100,
            0b1111100,
            0b0111000);

        Char7x5('p',
            0b1111100,
            0b1111100,
            0b0100100,
            0b0111100,
            0b0011000);

        Char7x5('q',
            0b0011000,
            0b0111100,
            0b0100100,
            0b1111100,
            0b1111100);

        Char7x5('r',
            0b1111100,
            0b1111000,
            0b0000100,
            0b0000100,
            0b0001000);

        Char7x5('s',
            0b1001000,
            0b1011100,
            0b1010100,
            0b1110100,
            0b0100100);

        Char7x5('t',
            0b0000100,
            0b0111110,
            0b1111111,
            0b1000100,
            0b0100000);

        Char7x5('u',
            0b0111100,
            0b1111100,
            0b1000000,
            0b1111100,
            0b0111100);

        Char7x5('v',
            0b0011100,
            0b0111100,
            0b1100000,
            0b0111100,
            0b0011100);

        Char7x5('w',
            0b0111100,
            0b1110000,
            0b0111000,
            0b1110000,
            0b0111100);

        Char7x5('x',
            0b1101100,
            0b1111100,
            0b0010000,
            0b1111100,
            0b1101100);

        Char7x5('y',
            0b1001100,
            0b1011100,
            0b1010000,
            0b1111100,
            0b0111100);

        Char7x5('z',
            0b1100100,
            0b1110100,
            0b1011100,
            0b1001100,
            0b1000100);

        Char7x5('\xbd', // '�'
            0b0111001,
            0b1111101,
            0b1000100,
            0b1111101,
            0b1111101);

        Char7x5('+',
            0b0001000,
            0b0001000,
            0b0111110,
            0b0001000,
            0b0001000);

        Char7x5('-',
            0b0001000,
            0b0001000,
            0b0001000,
            0b0001000,
            0b0001000);

        Char7x5('=',
            0b0010100,
            0b0010100,
            0b0010100,
            0b0010100,
            0b0010100);

        Char7x5('<',
            0b0001000,
            0b0011100,
            0b0110110,
            0b1100011,
            0b1000001);

        Char7x5('>',
            0b1000001,
            0b1100011,
            0b0110110,
            0b0011100,
            0b0001000);

        CharDefault7x5(
            0b0111110,
            0b0100010,
            0b0100010,
            0b0100010,
            0b0111110);
    }
}
