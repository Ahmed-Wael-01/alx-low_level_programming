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
	_putchar(remainder);
	return (remainder);
}
