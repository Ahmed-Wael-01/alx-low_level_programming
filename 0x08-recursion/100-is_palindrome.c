#include "main.h"

/**
 * is_palindrome - does something
 * @s: a variable
 *
 * Description: a function
 * Return: 0
*/

int length(char *s)
{
	if (*s != '\0')
		return (length(s) + 1);
	return (0);
}

/**
 * pal - does something
 * @s: a variable
 * @f: a variable
 * @b: a variable
 *
 * Description: a function
 * Return: 0
*/

int pal(char *s, int f, int b)
{
	if (*(s + f) != *(s + b))
		return (0);
	if (f < b + 1)
		return(pal(s, f + 1, b - 1));
	return (1);
}

/**
 * is_palindrome - does something
 * @s: a variable
 *
 * Description: a function
 * Return: 0
*/

int is_palindrome(char *s)
{
	int i = 0;

	if (*s == '\0' || *(s + 1) == '\0')
		return (1);
	while (*(s + i) != '\0')
		i++;
	return (pal(s, 0, i - 1));
}
