#include "main.h"

/**
 * reverse_array-  reverses the content of an array of integers.
 * @a: array of integars to be reversed
 * @n: number of times to be reversed
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n; i++)
	{
		n--;
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

