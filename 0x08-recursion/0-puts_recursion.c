#include "main.h"

/**
 * _puts_recursion - does something
 * @s: a variable
 *
 * Description: a function
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
}
