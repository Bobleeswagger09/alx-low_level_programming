#include "main.h"
/**
* print_last_digit - prints last digit
* of a number.
*
* @n: input number as an integer
*
* Return: last digit.
*/

int print_last_digit(int n)
{
	int l, j;
	l = n % 10;

	if (l < 0)
		l = -l;
	_putchar(l + '0');

	return (l);
}
