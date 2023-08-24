#include "main.h"

/**
 * rot13 - does something
 * @str: a variable
 *
 * Description: a function
 * Return: str
*/

char *rot13(char *str)
{
	char values[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char newVal[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == values[j])
			{
				str[i] = newVal[j];
				break;
			}
		}
	}
	return (str);
}
