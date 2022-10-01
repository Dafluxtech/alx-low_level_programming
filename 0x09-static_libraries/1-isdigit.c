#include "main.h"

/**
 * _isdigit - a function that checks for a digit.
 * @c: character input
 * Return: Returns 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
