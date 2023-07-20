#include <stdio.h>
/**
* main - main function
*
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 3 == 0)
			printf("%d", "Buzz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
