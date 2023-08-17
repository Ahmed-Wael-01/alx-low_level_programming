#include "main.h"

/**
* print_diagonal - it does something
* @n: a variable
*
* Description: function that checks for uppercase character
* Return: 0
*/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	if (i != 0)
		_putchar(92);
	_putchar('\n');
	}
}
