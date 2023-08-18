#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: the diff types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";

	va_list diffAugments;

	va_start(diffAugments, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(diffAugments, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(diffAugments, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(diffAugments, double));
					break;
				case 's':
					string = va_arg(diffAugments, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(diffAugments);
}
