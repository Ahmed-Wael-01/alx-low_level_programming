#include "main.h"

/**
* print_alphabet_x10 - print alpha
*
* Description: it does smthing
* Return: 0
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a++);
		}
		_putchar('\n');
	}
}
