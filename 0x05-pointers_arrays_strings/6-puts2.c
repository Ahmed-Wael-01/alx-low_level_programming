#include "main.h"

/**
 * puts2 - does something
 * @str: a variable
 *
 * Description: a function
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
