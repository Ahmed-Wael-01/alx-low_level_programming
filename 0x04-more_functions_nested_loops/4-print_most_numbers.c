#include "main.h"

/**
* print_most_numbers - it does something
*
* Description: function that checks for uppercase character
* Return: 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
