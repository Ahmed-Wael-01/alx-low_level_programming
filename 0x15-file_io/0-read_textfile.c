#include "main.h"

/**
 * read_textfile - a functtion
 * @filename: a var
 * @letters: a var
 *
 * Description: it does something
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buffer[1024 * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	close(fd);
	return (bytes);
}
