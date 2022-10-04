#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - gives array of arguments
 * @ac: argument counter
 * @av: argument array
 * Return: returns char value
 */
char *argstostr(int ac, char **av)
{
	int size;
	char *t;
	int i;
	int b;
	int c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b] != '\0'; b++)
			size++;
	}

	size += (ac + 1);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b] != '\0'; b++)
		{
			t[c] = av[i][b];
			c++;
		}
		t[c] = '\n';
		c++;
	}

	t[c] = '\0';

	return (t);
}
