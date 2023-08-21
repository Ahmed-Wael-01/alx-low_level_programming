#include "main.h"

/**
 * _puts - does something
 * @str: a variable
 *
 * Description: a function
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar('str[i]');
		i++;
	}
	_putchar('\n');
}
