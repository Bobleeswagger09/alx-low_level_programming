#include "main.h"
/**
* print_line - print straight line on the terminal
*
* @n: number of times the character '_' will be printed
*
* Return: void;
*/

void print_line(int n)
{
	int i;	

	if (n >= 0)
		putchar('\n');

	for (i = 1; i <= n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
