#include "main.h"
/**
 * _strstr - Starting point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *l = needle;

		while (*m == *l && *l != '\0')
		{
			m++;
			l++;
		}

		if (*l == '\0')
			return (haystack);
	}

}
