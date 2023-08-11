#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Description: prints the whole alphabet with putchar
 * Return:0
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
		putchar(a++);
	while (b <= 'Z')
		putchar(b++);
	putchar('\n');
	return (0);
}
