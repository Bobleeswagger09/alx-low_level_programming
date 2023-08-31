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
	unsigned long int max_num = 0x01;

	max_num <<= index;
	if (max_num == 0)
	{
		return (-1);
	}
	*n |= max_num;
	return (1);
}
