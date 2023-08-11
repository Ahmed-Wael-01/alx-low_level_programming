#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Description: prints the whole alphabet with putchar
 * Return:0
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
		putchar(48 + a++);
	putchar('\n');
	return (0);
}
