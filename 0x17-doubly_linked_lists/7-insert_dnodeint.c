#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: the head of the list
 * @idx: the index of the new node
 * @n: value of the node
 *
 * Description: inserts a new node at a certain index
 * Return: a pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr, *pre;
	unsigned int track = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	curr = *h;
	while (curr)
	{
		if (track == idx)
		{
			new->prev = curr->prev;
			new->next = curr;
			curr->prev = new;
			if (idx == 0)
				*h = new;
			else
				pre->next = new;
			break;
		}
		pre = curr;
		curr = curr->next;
		track++;
	}
	if (!curr && track == idx)
	{
		new->next = NULL;
		new->prev = pre;
		pre->next = new;
	}
	if (track != idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
