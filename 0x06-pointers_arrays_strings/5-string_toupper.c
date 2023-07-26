#include "main.h"

/**
* string_toupper - change all lowercase to uppercase
* @n: pointer
*
* Return: n
*/

char *string_toupper(char *n)
{
	int w;

	w = 0;
	while (n[w] != '\0')
	{
		if (n[w] >= 'a' && n[w] <= 'z')
		{
			n[w] = n[w] - 32;
		}
		w++;
	}
	return (n);
}
