#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Struct op
 *
 * @argc: The operator
 * @argv: The function associated
 *
 * Description: calculator for dummies
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2]))(num1, num2);

	printf("%d\n", result);

	return (0);
}
