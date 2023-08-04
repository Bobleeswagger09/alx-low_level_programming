#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_number - check for a number in an array of char
 * @str: Our array
 *
 * Return: Always 0 (Success)
 */

int check_number(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int str_to_int;
	int result = 0;

	i = 1;

	while (i < argc)
	{
		if (check_number(argv[i]))
		{
			str_to_int = atoi(argv[i]);
			result += str_to_int;
		}
		else
		{
			printf("Error\n");
		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
