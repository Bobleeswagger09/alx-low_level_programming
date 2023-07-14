#include <stdio.h>

/**
* main - Display Alpha big n small
* Return: Always 0 (success)
*/

int main(void)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
		putchar(a[i]);
	putchar('\n');
	return (0);
}
