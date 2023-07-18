#include "main.h"
#include "unistd.h"
/**
* _putchar: Writes the character c to stdout
* @c: The character to print
*
*Return: 1 on Success
*On error: -1 is returned and error, is set in the correct wa.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
