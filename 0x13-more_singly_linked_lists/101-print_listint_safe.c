#include "lists.h"

/**
 * print_listint_safe - prints nodes :o
 * @head: the list
 *
 * Description: does something
 * Return: the length
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	const listint_t *curr = head;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		len++;
	}
	return (len);
}
