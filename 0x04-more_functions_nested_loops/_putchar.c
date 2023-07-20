#include "main.h"
#include "unistd.h"
/**
* _putchar: Writes the character c to stdout
*
* @c: The character to print
*
* Return: 1 on Success
*
* On error: -1 is returned and error is set the correct way.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
