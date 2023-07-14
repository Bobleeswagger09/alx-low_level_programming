#include <stdio.h>
/**
* main - Print 0-9 and newline
* Return: Always 0 (sucess)
*/

int main(void)
{
	int singleDigit;
	for (singleDigit = 0; singleDigit < 10; singleDigit++)
	{
		putchar((singleDigit % 10) + '0');
	}
	putchar('\n');

	return (0);
}
