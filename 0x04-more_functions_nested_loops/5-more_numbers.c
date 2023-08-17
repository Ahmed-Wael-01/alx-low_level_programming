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
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; i <= 15 ; j++)
		{
			if (j / 10 == 0)
				_putchar(j + '0');
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
