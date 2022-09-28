#include "main.h"

/**
 * factorial - function that returns the factorial
 * of a given number.
 * @n: number given
 * Return: return the factorial of the number(n) or
 * returns -1 if n is lower than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
