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
	int len1 = 0, len2 = 0;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	
	while (n2[len2] != '\0')
	{
		len2++;
	}
	rev_string(n1);
	rev_string(n2);
	for (i = 0; i < size_r; i++)
	{
		if (i < len1  && i < len2)
		{
			r[i] = ((n1[i] - 48 + n2[i] - 48 + add_one) % 10) + 48;
			if ((n1[i] - 48 + n2[i] - 48 + add_one) > 9)
				add_one = 1;
			else
				add_one = 0;
		}
		else if (i < len1)
		{
			r[i] = ((n1[i] - 48 + add_one) % 10) + 48;
			if ((n1[i] - 48 + add_one) > 9)
				add_one = 1;
			else
				add_one = 0;
		}
		else if (i < len2)
		{
			r[i] = ((n2[i] - 48 + add_one) % 10) + 48;
			if ((n2[i] - 48 + add_one) > 9)
				add_one = 1;
			else
				add_one = 0;
		}
		else
		{
			if (add_one == 1)
				r[i] = add_one + 48;
			i++;
			break;
		}
	}
	rev_string(n1);
	rev_string(n2);
	rev_string(r);
	r[i] = '\0';
	return (r);
}
