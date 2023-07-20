#include "main.h"
/**
* print_diagonal - prints diagonal using the '\' character
*
* @n: number of times the character should be printed
*
* Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
