#include "main.h"

/**
 * get_endianness- funC that CHeck for Endianness;
 * Return: 0 if big endian, 1 if little endian;
*/

int get_endianness(void)
{
	unsigned int naruto = 1;
	unsigned char *sasuke_ptr;

	sasuke_ptr = (unsigned char *)&naruto;

	if (*sasuke_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
