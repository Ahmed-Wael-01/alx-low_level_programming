#include "main.h"

/**
* print_triangle - it does something
* @size: a variable
*
* Description: function that checks for uppercase character
* Return: 0
*/

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
