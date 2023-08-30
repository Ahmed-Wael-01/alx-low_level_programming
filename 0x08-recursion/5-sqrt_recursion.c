#include "main.h"

/**
 * square_root - does something
 * @n: a variable
 * @guess: a variable
 * Description: a function
 * Return: 0
*/
int square_root(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		square_root(n, guess - 1);
	else if (guess * guess < n)
		return (-1);
}

/**
 * _sqrt_recursion - does something
 * @n: a variable
 *
 * Description: a function
 * Return: 0
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, n));
}
