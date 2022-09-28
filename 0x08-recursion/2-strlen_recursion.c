#include "main.h"

/**
 * _strlen_recursion- function that returns the
 * string length
 *
 * @s: string
 * Return: returns the length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i = i + 1);
	}
	return (0);
}

