#include "main.h"

/**
 * get_endianness - i seriously don't know
 *
 * Return: 0
 */

int get_endianness(void)
{
	int n = 1;

	return (*(char *)&n);
}
