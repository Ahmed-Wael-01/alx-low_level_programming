#include "main.h"

/**
 * print_binary - print in binary
 * @n: the number
 *
 * Description: prints a number in binary form
 */

void print_binary(unsigned long int n)
{
	int index = sizeof(n) * 8 - 1;
	int flag = 0;

	while (index)
	{
		if ((n & (1 << index)) >> index)
		{
			_putchar(49);
			flag = 1;
		}
		else if (flag)
			_putchar(48);
	}
	if (!flag)
		_putchar(48);
}
