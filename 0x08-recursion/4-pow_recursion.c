#include "main.h"

/**
 * _pow_recursion - does something
 * @x: a variable
 * @y: a variable
 *
 * Description: a function
 * Return: 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (_pow_recursion(x, y - 1) * x);
	else
		return (1);
}
