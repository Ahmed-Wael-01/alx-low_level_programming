#include "main.h"

/**
 * flip_bits - counts the fliped bits
 * @n: a number
 * @m: another number
 *
 * Description: it does something
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fliped = n ^ m;
	unsigned int counter = 0;

	while (fliped)
	{
		if (fliped & 1ul)
			counter++;
		fliped = fliped >> 1;
	}
	return (counter);
}
