#include "main.h"
#include "pow.c"

/**
 * print_binary - A function that Prints Num IN binary
 * @n: nUM to be priNted
 *
 * Return: ntn
 */

void print_binary(unsigned long int n)
{
	char F;
	unsigned long int DQ, CHECK_ME;

	F = 0;
	DQ = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (DQ != 0)
	{
		CHECK_ME = n & DQ;
		if (CHECK_ME == DQ)
		{
			F = 1;
			_putchar('1');
		}
		else if (F == 1 || DQ == 1)
		{
			_putchar('0');
		}
		DQ >>= 1;
	}
}
