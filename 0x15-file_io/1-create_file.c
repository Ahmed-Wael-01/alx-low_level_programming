#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: a var
 * @text_content: a var
 *
 * Description: it does something
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int dest;

	if (!filename)
		return (-1);
	dest = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
	if (dest == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(dest);
		return (1);
	}
	write(dest, text_content, strlen(text_content));
	return (1);
}
