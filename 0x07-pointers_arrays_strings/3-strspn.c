#include "main.h"
/**
 * _strspn - Starting point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int v = 0;
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
			{
				v++;
				break;
			}
			else if (accept[w + 1] == '\0')
				return (v);
		}
		s++;
	}
	return (v);
}
