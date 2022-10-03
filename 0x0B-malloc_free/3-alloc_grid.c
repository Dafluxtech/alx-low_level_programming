#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: returns NULL on failure and
 * NULL when width or height is negative
 */
int **alloc_grid(int width, int height)
{
	int **d;
	int a;
	int b;
	int c;

	if (width <= 0 || height <= 0)
		return (NULL);

	d = malloc(sizeof(int) * height);
	
	if (d == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		d[a] = malloc(sizeof(int) * width);
		if (d == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(d[b]);
			}
			free(d);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (c = 0; c < width; c++)
			d[a][c] = 0;
	}
	return (d);
}

