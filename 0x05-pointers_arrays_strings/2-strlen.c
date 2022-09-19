#include "main.h"

/**
 * _strlen- function that returns the length of a string.
 * @s: string character
 * Return: return the length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0';)
	{
		a++;
	}
	return (a);
}
