#include "main.h"

/**
* print_last_digit - print alpha
* @n: the number to compare
*
* Description: it does smthing
* Return: 0
*/
int print_last_digit(int n)
{
	int remainder = (n % 10);

	if (remainder < 0)
		remainder = remainder * -1;
	_putchar(remainder + '0');
	return (remainder);
}
