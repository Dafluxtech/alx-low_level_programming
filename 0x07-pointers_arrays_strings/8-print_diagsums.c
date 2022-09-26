#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that printgs the sum of
 * diagonals of a square matrix of integers
 * @a: square matrix to be printed
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	sum = 0;
	sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
