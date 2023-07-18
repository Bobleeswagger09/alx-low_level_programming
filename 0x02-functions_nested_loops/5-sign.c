#include "main.h"
/**
* print_sign - Determines if the input number
* greater, is less or equa to Zero.
*
* @n: The input number as an integer
* Return: 1 is greater than zero. 0 is zero
* -1 is less than Zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_puchar(42);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		retutn(0);
	}
	_putchar('\n');
}


