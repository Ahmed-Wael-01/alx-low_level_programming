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
	unsigned int num = n;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
