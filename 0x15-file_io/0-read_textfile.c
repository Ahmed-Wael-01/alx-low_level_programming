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
	int dest;
	char *buffer = malloc(sizeof(char) * letters);
	size_t sum;

	if (!filename || !letters)
		return (0);
	dest = open(filename, O_RDONLY);
	if (!dest)
		return (0);
	sum = read(dest, buffer, letters);
	if (!sum)
		return (0);
	sum = write(1, buffer, sum);
	free(buffer);
	close(dest);
	return (sum);
}
