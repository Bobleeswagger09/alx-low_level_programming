#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of characters
* @size: represents the size of the array
* @c: character to assign
*/

char *create_array(unsigned int size, char c)
{
	char *charArray;
	unsigned int n;

	charArray = malloc(sizeof(char) * size);
	if (size  == 0 || charArray == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		charArray[n] = c;
	return (charArray);

}
