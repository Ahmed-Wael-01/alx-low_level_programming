#include "main.h"

/**
 * leet - does something
 * @str: a variable
 *
 * Description: a function
 * Return: str
*/

char *leet(char *str)
{
	char values[] = {'A', 'E', 'O', 'T', 'L', '4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == values[j] || str[i] == values[j] + 32)
				str[i] = values[j + 5];
		}
	}
	return (str);
}
