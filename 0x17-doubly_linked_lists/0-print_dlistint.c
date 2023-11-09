#include "lists.h"

/**
 *print_dlistint - print list
 * @h: head
 *
 * Discription: prints every node in the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		counter++;
	}
	return (counter);
}
