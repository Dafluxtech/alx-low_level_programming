#include "main.h"

/**
 * primelocator - function to check if a number is prime
 * @i: number to check
 * @j: numbers to scan through
 * Return: returns 1 if interger is prime
 * otherwise returns 0 if not.
 */
int primelocator(int i, int j)
{
	if (i <= 1 || i % j == 0)
		return (0);
	else if (i == j)
		return (1);
	else if (i > j)
		primelocator(i, j + 1);

	return (1);
}

/**
 * is_prime_number - indicates if a number is prime
 * or not
 * @n: number to check
 * Return: returns 0 if number is not a prime number
 * and 1 if number is prime.
 */
int is_prime_number(int n)
{
	return (primelocator(n, 2));
}
