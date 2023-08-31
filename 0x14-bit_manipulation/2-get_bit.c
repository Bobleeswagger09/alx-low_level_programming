#include "main.h"

/**
* get_bit - A function that returns the
* value of a bit at a given index
* @n: The number to be retrieved from the bit
* @index: current index where the bit is at
* Return: bit or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max_num = 0x01;

	max_num <<= index;
	if (max_num == 0)
	{
		return (-1);
	}

	if ((n & max_num))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
