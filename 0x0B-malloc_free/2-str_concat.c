#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns concatenated strings s1 and s2
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int first;
	int second;
	int i = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (first = 0; first <= *s1;)
	{
		first++;
	}
	for (second = 0; second <= *s2;)
	{
		second++;
	}

	ptr = malloc(sizeof(char) * (first + second + 1));

	if (ptr == NULL)
		return (NULL);

	while (*s1)
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}
	return (ptr);
}
