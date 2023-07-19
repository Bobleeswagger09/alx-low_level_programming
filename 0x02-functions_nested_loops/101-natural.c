#include <stdio.h>
/**
* main - Lists all the natural numbers below 1024 (excluded)
* that are multiples of 3 or 5.
*
* multiple_sum -  simple function to handle multiple sum
* Return: Always 0
*/

int multiple_sum(int max)
{
	int ret = 0;

	for (int i = 0; i < max; i++)
	{
		if ((i % 3) == 0 || ((i % 5) == 0))
		{
			ret += i;
		}

	}
}

int main(void)
{
	printf("%d\n", multiple_sum(1024));
}
