#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - a function that prints numbers, followed by a new line
* @separator: separator is the string to be printed between numbers
* @n: n is the number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;

	va_list allnum;

	va_start(allnum, n);
	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(allnum, unsigned int));
		if (counter != (n - 1) && separator != (NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(allnum);
}
