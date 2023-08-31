#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if large endian || 1 if small endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *)&i;

	if (*ch)
	{
		return (1);
	}
	return (0);
}
