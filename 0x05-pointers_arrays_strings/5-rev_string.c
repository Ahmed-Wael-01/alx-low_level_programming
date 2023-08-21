#include "main.h"

/**
 * rev_string - does something
 * @s: a variable
 *
 * Description: a function
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *new;

	while (s[i + 1] != '\0')
	{
		i++;
	}
	while (i >= 0 && s[i] != '\0')
	{
		new[j] = s[i];
		j++;
		i--;
	}
	*s = new;
}
