#include "main.h"


/**
 * set_bit - A function that sets the value of a bit to 1
 * @given index to
 * @n: Num we want to set
 * @index: position of the num
 *
 * Return: 1 on success or -1 if an error occured
*/


int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int msk = 1UL << index;

	if (index >= 64)
	{
		return (-1);
	}

	msk = 1UL << index;
	*n = *n | msk;

	return (1);

}
