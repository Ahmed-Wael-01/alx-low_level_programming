#include "main.h"

/**
 * binary_to_uint - bi to U int
 * @b: the binary
 *
 * Description: does something
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	if (b[i] == 48 || b[i] == 49)
		num = b[i] - 48;
	else
		return (0);
	i++;
	while (b[i] != '\0')
	{
		if (b[i] == 48 || b[i] == 49)
			num = num * 2 + (b[i] - 48);
		else
			return (0);
		i++;
	}
	return (num);
}
