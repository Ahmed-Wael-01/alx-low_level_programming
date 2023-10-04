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
	int dest;

	if (filename == NULL)
		return (-1);
	dest = open(filename, O_APPEND);
	if (dest == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(dest);
		return (1);
	}
	write(dest, text_content, strlen(text_content));
	close(dest);
	return (1);
}
