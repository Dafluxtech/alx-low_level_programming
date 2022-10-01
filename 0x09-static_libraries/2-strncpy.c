#include "main.h"

/**
 * _strncpy- function that copies a string
 * @dest: destination string
 * @src: string source
 * @n: number of times to be copied
 * Return: return character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		if (a < n)
			dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a++] = '\0';
	}
	return (dest);
}
