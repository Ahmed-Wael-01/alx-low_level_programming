#include "main.h"

/**
 * factorial - does something
 * @n: a variable
 *
 * Description: a function
 * Return: 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		return (factorial(n - 1) * n);
	}
}
