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
	unsigned long int max_num = 0x01;

	max_num = ~(max_num << index);
	if (max_num == 0x00)
		return (-1);
	*n &= max_num;
	return (1);
}
