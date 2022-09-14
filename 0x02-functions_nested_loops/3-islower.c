#include "main.h"
/**
 * _islower - main function
 *
 * @c: character argument
 *
 * Return: returns 1 and 0 depending on condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
