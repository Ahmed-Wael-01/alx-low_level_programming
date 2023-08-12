#include <stdio.h>
/**
 * main - start point
 *
 * Description: more combination problems
 * Return: 0
 */
int main(void)
{
	int a1 = 0;

	while (a1 <= 9)
	{
		int a2 = 0;

		while (a2 <= 9)
		{
			int b1 = 0;

			while (b1 <= 9)
			{
				int b2 = 0;

				while (b2 <= 9)
				{
					if (a1 != b1 || a2 != b2)
					{
						if (a1 < b1 || (a1 == b1 && a2 < b2))
						{
							putchar('0' + a1);
							putchar('0' + a2);
							putchar(' ');
							putchar('0' + b1);
							putchar('0' + b2);
							if (a1 != 9 || a2 != 8 || b1 != 9 || b2 != 9)
							{
							putchar(',');
							putchar(' ');
							}
						}
					}
					b2++;
				}
				b1++;
			}
			a2++;
		}
		a1++;
	}
	putchar('\n');
	return (0);
}
