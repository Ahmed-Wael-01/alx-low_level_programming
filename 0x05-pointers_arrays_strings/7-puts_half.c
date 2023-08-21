#include "main.h"

/**
 * puts_half - does something
 * @str: a variable
 *
 * Description: a function
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i + 1] != '\0')
	{
		i++;
	}
	if ((i + 1) % 2 == 0)
		i = i - ((i + 1) / 2);
	else
		i = i - (i / 2);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
