#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Description: prints the whole alphabet with putchar
 * Return:0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
		putchar(a--);
	putchar('\n');
	return (0);
}
