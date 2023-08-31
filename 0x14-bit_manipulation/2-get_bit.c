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

	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
