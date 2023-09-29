#include "main.h"

/**
 * get_bit - gets a bit :D
 * @n: a var
 * @index: a var
 *
 * Description: it does something
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
