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
	int fd1, fd2, tst;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	buf = malloc(1024 * sizeof(char));
	do {
		tst = read(fd1, buf, 1024);
		tst = write(fd2, buf, tst);
		if (tst == -1)
		{
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (tst);
	free(buf);
	tst = close(fd1);
	if (tst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	tst = close(fd2);
	if (tst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
