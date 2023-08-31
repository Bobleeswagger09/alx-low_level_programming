#include "main.h"

/**
* flip_bits - A function that returns the number of bits you
* would need to flip, to get from one number to another.
* @n: number of bit flips needed m for n
* @m: number to set other bit equal
* Return: number of fliped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int loop, count_me = 0;
	unsigned long int curr;
	unsigned long int xor = n ^ m;

	for (loop = 63; loop >= 0; loop--)
	{
		curr = xor >> loop;
		if (curr & 1)
			count_me++;
	}

	return (count_me);
}
