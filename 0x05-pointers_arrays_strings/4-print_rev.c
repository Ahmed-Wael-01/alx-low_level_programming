#include "main.h"

/**
 * print_rev - does something
 * @s: a variable
 *
 * Description: a function
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i + 1] != '\0')
	{
		i++;
	}
    while (i >= 0)
	{
        _putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
