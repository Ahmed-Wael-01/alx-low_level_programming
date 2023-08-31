#include "main.h"

/**
 * prime - does something
 * @n: a variable
 * @guess: a variable
 *
 * Description: a function
 * Return: 0
*/

int prime(int n, int guess)
{
	if (guess == 1)
		return (1);
	else if (n % guess == 0)
		return (0);
	else
		return (prime(n, guess - 1));
}

/**
 * is_prime_number - does something
 * @n: a variable
 *
 * Description: a function
 * Return: 0
*/

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (prime(n, n / 2));
}
