#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t len = 0;

	while (curr != NULL)
	{
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", curr->len, curr->str);
		curr = curr->next;
		len++;
	}
	return (len);

}
