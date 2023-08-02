#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - if prime return 0 else return 1
 * @n: number to calculate
 *
 * Return: 1 if n is a prime number, else return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
/**
 * prime - calculates if a number is prime recursively
 * @n: number to calculate
 * @i: counter
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
