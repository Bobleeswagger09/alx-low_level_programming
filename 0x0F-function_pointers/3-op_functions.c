#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a + b
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns a - b
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns a * b
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns a / b
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return the remainder of two numbers
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
