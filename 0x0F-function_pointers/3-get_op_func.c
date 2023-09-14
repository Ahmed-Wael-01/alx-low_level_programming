#include "3-calc.h"

/**
 * get_op_func - function operation name
 *
 * @s: The operator
 *
 * Description: calculator for dummies
 * Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op[0] != s[0] || i != 5)
		i++;

	return (ops[i].f);
}
