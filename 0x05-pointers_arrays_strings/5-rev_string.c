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
	char new;

	while (s[i + 1] != '\0')
	{
		i++;
	}
	while (j <= i && s[i] != '\0')
	{
		new = s[j];
		s[j] = s[i];
		s[i] = new;
		j++;
		i--;
	}
}
