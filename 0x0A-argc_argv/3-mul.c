#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, len, e, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	e = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (c);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int box, f1, f2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	f1 = _atoi(argv[1]);
	f2 = _atoi(argv[2]);
	box = f1 * f2;

	printf("%d\n", box);

	return (0);
}
