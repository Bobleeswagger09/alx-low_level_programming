#include "variadic_functions.h"

/**
* sum_them_all -  a function that returns the sum of all its parameters.
* @n: defines the number of parameters to be passed
* @...: list of parameters to be calculated
* Return: 0 if n == 0 else return sum.
*/


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list augments;

	va_start(augments, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(augments, const unsigned int);
	}

	va_end(augments);
	return (sum);
}
