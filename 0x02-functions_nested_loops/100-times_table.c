#include "main.h"

/**
* print_times_table - print alpha
* @n: some number
*
* Description: it does smthing
* Return: 0
*/
void print_times_table(int n)
{
	int i, j;

    if (n >= 0 && n <= 15)
    {
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			int total = j * i;

			if (j != 0)
			{
                if (total >= 100)
                {
                    _putchar(',');
					_putchar(' ');
                    _putchar('0' + (total / 100));
					_putchar('0' + (total % 100) / 10);
					_putchar('0' + (total % 10));
                }
				else if (total >= 10)
				{
					_putchar(',');
					_putchar(' ');
                    _putchar(' ');
					_putchar('0' + (total / 10));
					_putchar('0' + (total % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
                    _putchar(' ');
					_putchar('0' + (total % 10));
				}
			}
			else
				_putchar('0');
		}
		_putchar('\n');
	}
    }
}
