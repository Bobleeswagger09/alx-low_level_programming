#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concat all augment
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int g, n, p = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (g = 0; g < ac; g++)
	{
		for (n = 0; av[g][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (g = 0; g < ac; g++)
	{
	for (n = 0; av[g][n]; n++)
	{
		str[p] = av[g][n];
		p++;
	}
	if (str[p] == '\0')
	{
		str[p++] = '\n';
	}
	}
	return (str);
}
