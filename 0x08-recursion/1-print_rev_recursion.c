#include "main.h"

/**
 * _print_rev_recursion - does something
 * @s: a variable
 *
 * Description: a function
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
