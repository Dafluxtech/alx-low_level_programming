#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: return always 0
 */
int main(void)
{
	int counter = 2;
	float i = 1;
	float j = i + 1;
	float k = i + j;

	printf("%.0f, ", i);
	printf("%.0f, ", j);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", k);
		i = j;
		j = k;
		k = i + j;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}


