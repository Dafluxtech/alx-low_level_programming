#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 * @s: string segment
 * @accept: contains bytes
 * Return: returns number of bytes in the initial segn=ment of @s
 * which consist of only bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
				break;
			}
		}
		if (s[j] == '\0')
			return (a);

	}
	return (a);
}

