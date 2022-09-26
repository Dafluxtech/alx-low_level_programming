#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to change
 * @to: value to change the pointer to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
