#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints the n times table, starting with 0
*
* @n: prints from this number
*/

void print_to_98(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	for  (i = 0; i <= n; i++)
	{
		for (j = 0 ; j <= n; j++)
		{
			k = j * i;

			printf(j == 0 ? "%d" : k < 10 ? "%d, " : k < 100 ? "%d%d, " : "%d%d%d, ", k / 100, (k / 10) % 10, k % 10);
		}
		printf("\n");
	}
}
