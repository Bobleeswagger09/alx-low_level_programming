#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - Determines if a number is positive, negative or 0
*
*Return: Always return 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is Positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is Negative\n", n);
	return (0);
}
