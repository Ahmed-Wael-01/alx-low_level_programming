#include "main.h"

/**
 * _strlen - does something
 * @s: a variable
 *
 * Description: a function
 * Return: 0
*/

int _atoi(char *s)
{
	int i;
	unsigned int num = 0;
	int is_negative = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (s[i - 1] == '-')
				is_negative = 1;
			num = num * 10 + (s[i] - 48);
		}
		else if (num > 0)
		{
			break;
		}
	}
	if (is_negative == 0)
		return (num);
	else
		return (-num);
}
