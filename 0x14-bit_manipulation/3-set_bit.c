#include "main.h"

/**
 * set_bit - sets a bit :D
 * @n: a var
 * @index: a var
 *
 * Description: does something
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	return (!!(*n = *n | 1L << index));
}
