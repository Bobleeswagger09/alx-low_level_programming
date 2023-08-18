#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - a function that prints numbers, followed by a new line.
* @separator: space to be printed between the strings
* @n: number of strings passed to the function
* @...: number of augments to be printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *p;
	unsigned int i;
	va_list auglist;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(auglist, n);

	if (n > 0)
		printf("%s", va_arg(auglist, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(auglist, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", sep, p);
	}
	printf("\n");
	va_end(auglist);
}
