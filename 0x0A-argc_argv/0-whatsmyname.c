#include "main.h"
#include <stdio.h>

/**
* main - print the number of arguments passed to the program.
* @argc: augment count; used to know the number of command line augment passed
*passed to the program when you are executing the code.
*
* @argv: augment vector; an array of strings that hold the cli augments
*to a function before executing the code.
*/

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s", argv[0]);
	return (0);
}
