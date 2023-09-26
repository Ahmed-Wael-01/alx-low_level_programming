#include "lists.h"

/**
 * insert_nodeint_at_index - iserts a new node inside
 * @head: the head of the list
 * @idx: the index
 * @n: the value
 *
 * Description: i won't repeat
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *curr = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !curr)
		return (NULL);
	new->n = n;
	while (curr != NULL)
	{
		if (i == idx)
		{
			new->next = curr;
			*head = new;
			return (new);
		}
		i++;
		curr = curr->next;
	}
	return (NULL);
}
