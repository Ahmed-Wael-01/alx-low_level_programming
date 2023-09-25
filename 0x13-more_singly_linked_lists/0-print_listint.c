#include "lists.h"

/**
 * print_listint - prints nodes :o
 * @h: the list
 *
 * Description: does something
 * Return: the length
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		len++;
	}
	return (len);
}
