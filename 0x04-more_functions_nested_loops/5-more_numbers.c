#include "main.h"

/**
* more_numbers - it does something
*
* Description: function that checks for uppercase character
* Return: 0
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14 ; j++)
		{
			if (j / 10 != 0)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
