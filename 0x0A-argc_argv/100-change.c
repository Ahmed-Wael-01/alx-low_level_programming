#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - check the code
 * @argc: number
 * @argv: parameter
 *
 * Description: does somehing
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, lesscents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			lesscents += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
				break;
			printf("%d\n", lesscents);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
