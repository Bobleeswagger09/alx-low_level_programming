#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse
* Return: Always 0 (success)
*/

int main(void)
{
	char reverse_alpha;
	
	for (reverse_alpha = 'z'; reverse_alpha >= 'a'; reverse_alpha--)
	{
		putchar(reverse_alpha);
	}
	printf("\n");

	return (0);
}
