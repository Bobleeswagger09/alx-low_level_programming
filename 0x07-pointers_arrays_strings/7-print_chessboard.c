#include "main.h"
/**
 * print_chessboard -Starting point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int s;
	int n;

	for (s = 0; s < 8; s++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[s][n]);
		_putchar('\n');
	}
}

