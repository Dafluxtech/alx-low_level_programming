#include "main.h"

/**
 * char *string_toupper-  function that changes all lowercase
 * of a string to uppercase.
 * @n: string to be converted
 * Return: returns uppercase string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
