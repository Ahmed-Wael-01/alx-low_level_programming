#include "lists.h"

/**
 * pop_listint - pops the head
 * @head: first in the line
 *
 * Description: it does something
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (n);
}
