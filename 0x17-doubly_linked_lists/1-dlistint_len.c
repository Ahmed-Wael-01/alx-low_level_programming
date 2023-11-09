#include "lists.h"

/**
 * dlistint_len - counter
 * @h: head
 *
 * Discription: it countes the nodes in a linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	for (; h != NULL; h = h->next)
		counter++;
	return (counter);
}
