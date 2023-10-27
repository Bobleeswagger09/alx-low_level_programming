#include "main.h"

/**
 * clear_bit- Function that set d val of a bit to 0 @given index
 * @n: param
 * @index: given index
 * Return: 1 on success and, -1 on error
 *
*/


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk;

	if (index >= 64)
	{
		return (-1);
	}

	msk = ~(1UL << index);

	*n = *n & msk;

	return (1);
}

