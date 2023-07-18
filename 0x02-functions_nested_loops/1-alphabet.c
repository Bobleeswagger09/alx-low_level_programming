#include "main.h"
/**
* prints_alphabet - Prrints the alphabet in lower case.
*
* Return: Always 0 (sucess)
*/

void print_alphabet(void)
{
	int i;

	for (i = 79; i < 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
