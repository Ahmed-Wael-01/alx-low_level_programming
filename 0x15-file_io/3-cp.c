#include "main.h"

/**
 * main - entry
 * @argc: a var
 * @argv: a var
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int from_fd = 0, to_fd = 0;
	ssize_t b;
	char buffer[1024];

	if (argc != 3)
		dprintf(STRERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, );
}
