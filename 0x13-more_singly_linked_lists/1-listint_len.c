#include "lists.h"

/**
 * listint_len - prints nodes :o
 * @h: the list
 *
 * Description: does something
 * Return: the length
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
