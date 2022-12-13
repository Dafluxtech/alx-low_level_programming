#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: character to check
 * Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'))
	{
		return (1);
	}
	return (0);
}
