#include <stdlib.h>

/**
*
*
*
*
*/

char *create_array(unsigned int size, char c)
{
	char* charArray;
	unsigned int n;

	charArray = malloc(sizeof(char) * size);
	if (size  == 0 || charArray == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		charArray[n] = c;
	return (charArray);

}
