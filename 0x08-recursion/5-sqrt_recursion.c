#include "main.h"

/**
 * _sqrt_recursion - does something
 * @n: a variable
 *
 * Description: a function
 * Return: 0
*/
int square_root(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		square_root(n, guess - 1);
	else
		return (-1);
	
}
int _sqrt_recursion(int n)
{
	square_root(n, n);
}
