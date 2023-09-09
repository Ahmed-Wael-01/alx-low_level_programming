#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - does something
 * @ptr: a variable
 * @old_size: a variable
 * @new_size: a variable
 *
 * Description: a function
 * Return: 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_block;
	unsigned int i;

	if (ptr == NULL)
	{
		temp_block = malloc(new_size);
		return (temp_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		temp_block = malloc(new_size);
		if (temp_block != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)temp_block + i) = *((char *) ptr + i);
			free(ptr);
			return (temp_block);
		}
		else
			return (NULL);
	}
}
