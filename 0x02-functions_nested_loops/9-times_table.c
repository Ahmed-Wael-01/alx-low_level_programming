#include "main.h"

/**
* times_table - print alpha
*
* Description: it does smthing
* Return: 0
*/
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			int total = j * i;

			if (total < 10)
			{
				_putchar('0' + total);
			}
			else
			{
				_putchar('0' + (total / 10));
				_putchar('0' + (total % 10));
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
