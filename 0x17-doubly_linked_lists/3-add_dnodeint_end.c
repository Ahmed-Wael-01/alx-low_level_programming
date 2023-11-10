#include "lists.h"

/**
 * add_dnodeint_end - add at the end
 * @head: head
 * @n: value
 *
 * Discription: adds a new node at the end of the list
 * Return: pointer to the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;
	int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	curr = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	while (curr->next)
		curr->next;
	new->prev = curr;
	if (curr != NULL)
		curr->next = new;
	return (new);
}
