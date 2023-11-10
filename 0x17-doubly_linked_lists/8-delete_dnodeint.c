#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: the head of the list
 * @index: index of deletion
 *
 * Description: deletes a node at a certain index
 * Return: 1 on success and -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;
	while (curr)
	{
		if (i == index)
		{
			if (!curr->next && curr->prev)
				curr->prev->next = NULL;
			else if (curr->next && !curr->prev)
				curr->next->prev = NULL;
			else if (!curr->next && !curr->prev)
				;
			else
			{
				curr->next->prev = curr->prev;
				curr->prev->next = curr->next;
			}
			if (index == 0)
				*head = curr->next;
			free(curr);
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
