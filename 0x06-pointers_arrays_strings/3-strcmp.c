#include "main.h"

/**
 * _strcmp - does something
 * @s1: a variable
 * @s2: a variable
 *
 * Description: a function
 * Return: dest
*/

int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[i])
            continue;
        else if (s1[i] > s2[i])
            return (1);
        else
            return (-1);
    }
	return (0);
}
