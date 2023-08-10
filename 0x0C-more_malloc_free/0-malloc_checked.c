#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
