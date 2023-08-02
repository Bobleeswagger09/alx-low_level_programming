#include "main.h"

int checkPali(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checkPali(s, 0, _strlen(s)));
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * checkPali - checks the characters recursively for palindrome
 * @s: string to check
 * @i: count
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int checkPali(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checkPali(s, i + 1, len - 1));
}
