#include "main.h"

/**
 * flip_bits- reTurns the NUM of bits to be flipeed to get to HANOHTER
 * @n: 1st NuM
 * @m: second NUM
 *
 * Return: num of bits to CHANGe
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int EX_ZHOR;
	unsigned int KeepTRACKOF_Kount = 0;

	EX_ZHOR = n ^ m;
	while (EX_ZHOR != 0)
	{
		KeepTRACKOF_Kount++;
		EX_ZHOR &= (EX_ZHOR - 1);
	}
	return (KeepTRACKOF_Kount);
}

