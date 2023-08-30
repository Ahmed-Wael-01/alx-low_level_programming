#include "main.h"

/**
 * _strlen_recursion - does something
 * @s: a variable
 *
 * Description: a function
 * Return: 0
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
