#include "main.h"
int sqrt_recursion(int n, int s);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
/**
 * sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @s: iterator
 * Return: the resulting square root
 */
int sqrt_recursion(int n, int s)
{
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (sqrt_recursion(n, s + 1));
}
