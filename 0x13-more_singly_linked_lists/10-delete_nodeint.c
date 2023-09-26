#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: the list
 * @index: the index
 *
 * Desription: something is happening
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr, *trash;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
		return (1);
	}
	curr = *head;
	while (curr->next != NULL)
	{
		if (i == index - 1)
		{
			trash = curr->next;
			curr->next = curr->next->next;
			free(trash);
			return (1);
		}
		i++;
		curr = curr->next;
	}
	return (-1);
}
