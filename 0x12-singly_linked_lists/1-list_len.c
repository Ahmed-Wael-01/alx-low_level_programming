#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: a node
 *
 * Description: it does something
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

