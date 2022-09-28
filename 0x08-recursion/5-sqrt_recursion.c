#include "main.h"

/**
 * squareroot - finds the square root of two numbers
 * @a: first number
 * @b: second number
 * Return: square root
 */
int squareroot(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (squareroot(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns natural square root
 * of a number
 * @n: inputed number
 * Return: returns the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (squareroot(n, 1));
}
