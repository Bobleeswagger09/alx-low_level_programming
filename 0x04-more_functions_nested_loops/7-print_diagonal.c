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

	if (n <= 0)
		putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					putchar('\\');
				else if (j < i)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
