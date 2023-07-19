#include "main.h"
#include <stdio.h>
/**
* times_table - prints the 9 times table starting from 0
*
*/

void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (j == 0)
			{
				printf("%d, ", res);
			}
			else
			{
				printf("%2d", res);
				if (j != 9)
					printf(", ");
			}

		}
		printf("\n");
	}
}
