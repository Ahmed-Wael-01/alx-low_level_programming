#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends to a file
 * @filename: a var
 * @text_content: a var
 *
 * Description: it does something
 * Return: 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
