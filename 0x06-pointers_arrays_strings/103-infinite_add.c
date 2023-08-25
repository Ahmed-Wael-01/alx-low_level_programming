#include "main.h"

/**
 * infinite_add - does something
 * @n1: a variable
 * @n2: a variable
 * @r: a variable
 * @size_r: another one
 *
 * Description: a function
 * Return: dest
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
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, add_one = 0;

	rev_string(n1);
	rev_string(n2);
	for (i = 0; i < size_r; i++)
	{
		if (n1[i] != '\0' && n2[i] != '\0')
		{
			r[i] = ((n1[i] - 48 + n2[i] - 48) % 10) + add_one;
			if ((n1[i] - 48 + n2[i] - 48) > 9)
				add_one = 1;
			else
				add_one = 1;
		}
		else if (n1[i] != '\0')
		{
			r[i] = ((n1[i] - 48) % 10) + add_one;
			add_one = 0;
		}
		else if (n2[i] != '\0')
		{
			r[i] = ((n2[i] - 48) % 10) + add_one;
			add_one = 0;
		}
	}
	rev_string(r);
	r[i] = '\0';
	return (r);
}
