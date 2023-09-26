#include "lists.h"

/**
 * add_nodeint - a good old func
 * @head: a var
 * @n: a var
 *
 * Description: it does something i'm sure
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
