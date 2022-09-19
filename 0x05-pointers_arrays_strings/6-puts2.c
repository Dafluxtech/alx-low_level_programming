#include "main.h"
#include "2-strlen.c"

/**
 * puts2- prints every other character of a string,
 * starting with the first character
 * @str: string character
 */
void puts2(char *str)
{
	int a;

	for (a = 0; a < _strlen(str); a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
