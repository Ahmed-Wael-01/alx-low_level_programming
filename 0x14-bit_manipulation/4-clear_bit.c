#include "main.h"

/**
 * clear_bit - clears a bit :D
 * @n: a pointer to an int
 * @index: guess from the name
 *
 * Description: does something i guess
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n = *n ^ 1L << index;
	return (1);
}
