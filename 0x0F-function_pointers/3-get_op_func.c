#include "3-calc.h"

/**
 * index_func - function operation name
 *
 * @i: index
 * @ops: array
 * @s: array
 *
 * Description: calculator for dummies
 * Return: 0
 */

int index_func(int i, op_t ops[], char *s)
{
	if (ops[i].op[0] == s[0] || i == 5)
		return (i);
	return (index_func(i + 1, ops, s));
}

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

	return (ops[(index_func(i, ops, s))].f);
}
