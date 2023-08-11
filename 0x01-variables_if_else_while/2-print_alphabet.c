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

	while (a <= 'z')
		printf("%c", a++);
	printf("\n");
	return (0);
}
