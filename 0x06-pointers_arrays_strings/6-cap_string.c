#include "main.h"

/**
 * cap_string - does something
 * @str: a variable
 *
 * Description: a function
 * Return: str
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i == 0)
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		else if (str[i - 1] == " " || str[i - 1] == "," 
		|| str[i - 1] == ";" || str[i - 1] == "."
		|| str[i - 1] == "!" || str[i - 1] == "?"
		|| str[i - 1] == "\"" || str[i - 1] == "("
		|| str[i - 1] == ")" || str[i - 1] == "{"
		|| str[i - 1] == "}" || str[i - 1] == "\n")
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
	}
	return (str);
}
