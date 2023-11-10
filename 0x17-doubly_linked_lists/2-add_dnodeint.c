#include "lists.h"

/**
 * add_dnodeint - adds node at begining
 * @head: the head
 * @n: the value
 *
 * Discription: adds a new node at the begining of the list
 * Return: pointer to the new address
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
