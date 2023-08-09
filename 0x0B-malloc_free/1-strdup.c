#include "main.h"
#include <stdlib.h>

/**
* _strdup - A function that create a space in memory and stores
* a copy of a string in the memory.
* @str: the string
* Return: str_copy
*
*/

char *_strdup(char *str)
{
	char *str_copy;
	int i;

	unsigned int counter = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		counter++;

	str_copy = malloc(sizeof(char) * counter + 1);
	if (str_copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		str_copy[i] = str[i];
	return (str_copy);
}
