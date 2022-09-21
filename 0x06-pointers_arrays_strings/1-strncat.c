#include "main.h"

/**
 * _strncat-  function is similar to the _strcat function, except that
 * it will use at most n bytes from src
 * @dest: destination string
 * @src: string to be appended
 * @n: bytes from string that will be appended
 * Return: return character
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
			b = n;
	}
	return (dest);
}
