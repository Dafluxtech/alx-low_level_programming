#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return is 0
 */
int main(void)
{
	int counter = 0;
	long int i = 1;
	long int j = i;
	long int k = i + j;

	while (k < 4000000)
	{
		if (k % 2 == 0)
		{
			counter += k;
		}
		i = j;
		j = k;
		k = i + j;
	}
	printf("%d\n", counter);
	return (0);
}
