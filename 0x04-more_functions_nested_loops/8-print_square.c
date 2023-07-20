#include "main.h"
/**
* print_square - prints square using '#' character
*
* @size: size of the square
*
* Return: void
*/

void print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
