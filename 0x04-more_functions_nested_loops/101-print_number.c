#include "main.h"

/**
* print_number - it does something
* @n: a variable
*
* Description: function that checks for uppercase character
* Return: 0
*/

void print_number(int n)
{
	unsigned int i = 1;
	unsigned int num = n;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	while (num / i > 9 )
	{
		i *= 10;
	}
	while (i > 0)
	{
		_putchar('0' + ((num / i) % 10));
		i /= 10;
	}
}
