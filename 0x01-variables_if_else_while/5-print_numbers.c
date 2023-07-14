#include <stdio.h>
/**
* main - display num 1-9
* Return: Always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
