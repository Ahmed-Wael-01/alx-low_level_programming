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

	while (a <= 8)
	{
		int b = 1;

		while (b <= 9)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
			}
			else
			{
				b++;
				continue;
			}
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
	a++;
	}
	putchar('\n');
	return (0);
}
