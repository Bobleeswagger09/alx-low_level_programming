#include "main.h"

/**
* binary_to_uint - a function that converts a
* binary number to unsigned int
* @b: inside this string there is a binary number
*
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int k;

	if (b ==  NULL)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[k] - '0');
	}

	return (decimal_value);
}
