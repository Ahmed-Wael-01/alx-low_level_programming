#include <stdio.h>
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
    (void) argc;
    int i = 0;

    while (argv[i] != '\0')
    {
        printf("%c\n", argv[i]);
        i++;
    }
	return (0);
}
