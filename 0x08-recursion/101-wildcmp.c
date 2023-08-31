#include "main.h"

/**
 * wildcmp - does something
 * @s1: a variable
 * @s2: a variable
 *
 * Description: a function
 * Return: 0
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s1 == *s2 && *s1 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 != *s2 && *(s2 - 1) == '*' && *s2 == '\0')
		return (1);
	else if (*s1 != *s2 && *(s2 - 1) == '*' && *s1 != '\0')
		return (wildcmp(s1 + 1, s2));
	else
		return (0);

}
