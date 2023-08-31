#include "main.h"

/**
* clear_bit - A function that sets the value
* of a bit to 0 at given index
* @n: num to set bit in
* @index: index to set bit at
* Return: 1 on succes, or -1 on failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}

