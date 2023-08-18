#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - a function that prints numbers, followed by a new line.
* @separator: space to be printed between the strings
* @...: number of augments to be printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *str;
	va_list allstring;
	
	va_start(allstring, n);

	for (counter = 0; counter < n; counter++)
	{
		str = va_arg(allstring, char *);
		
		if (str == NULL)
			printf("(nil");
		printf("%s", str);

		if (counter != (n -1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(allstring);
}
