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
	if (n > 0 )
	{
		return (_strlen_recursion(n - 1) + n);
	}
	else
		return (0);
}
