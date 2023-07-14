#include <stdio.h>
/**
*main - main function
*
*Return: Always 0 (success).
*/
int main(void)
{
	printf("Size of char: %s byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %lf byte(s)\n", sizeof(float));
	return (0);
}
