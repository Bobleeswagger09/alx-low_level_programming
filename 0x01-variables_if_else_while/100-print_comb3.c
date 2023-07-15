#include <stdio.h>
/**
* main -  100-print_comb3
* Return: Always 0 (success)
*/

int main(void)
{
	int num1;

	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 9; num2++)
		{
			putchar((num1 % 10) + '0');

			putchar((num2 % 10) + '0');
			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');

			putchar(' ');
		}
	putchar('\n');
	}

	return (0);
}
