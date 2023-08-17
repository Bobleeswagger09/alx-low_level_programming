#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements the in array
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		if (cmp(array[s]))
			return(s);
	}
	return (-1);
}
