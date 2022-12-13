#include <stddef.h>
#include "main.h"

/**
 * _strchr- function that locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: returns a pointer to the first character c
 * or NULL if character not found.
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return (NULL);
}
