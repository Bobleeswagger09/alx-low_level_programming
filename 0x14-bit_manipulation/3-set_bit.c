#include "main.h"

/**
 * set_bit - A function that sets the value
 * of a bit at given index to 1
 * @n: bit number to be set
 * @index: index to set bit at
 * Return: 1 on success, or -1 failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

