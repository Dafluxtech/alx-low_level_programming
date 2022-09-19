#include "main.h"

/**
 * puts_half- prints half of a string
 * @str: string to be printed in half
 */
void puts_half(char *str)
{
	int a;
	int j;
	int len;

	len = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		len++;
	}

	j = (len / 2);

	if ((len % 2) == 1)
	{
		j = ((len + 1) / 2);
	}

	for (a = j; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}


