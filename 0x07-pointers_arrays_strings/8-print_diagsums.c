#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - does something
 * @a: a variable
 * @size: a variable
 *
 * Description: a function
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sum1,sum2);
}
