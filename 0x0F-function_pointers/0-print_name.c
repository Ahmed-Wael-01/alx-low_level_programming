#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - it is a function
 * @name: a parameter
 * @f: a parameter
 *
 * Description: it does something
 * Return: 0
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
