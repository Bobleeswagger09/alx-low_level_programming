#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: pointer --> a string containing a binary number
*
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res_entity;
	int bi_chip;

	if (b == NULL)
	{
		return (0);
	}

	res_entity = 0;


	while (*b != '\0')
	{
		bi_chip = *b - '0';
		if (bi_chip != 0 && bi_chip != 1)
		{
			return (0);
		}
		res_entity = (res_entity << 1 | bi_chip);
		b++;
	};
	return (res_entity);
}
