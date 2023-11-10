#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node
 * @head: the head of list
 * @index: he index
 *
 * Description: gets a node at a certain index
 * Return: a pointer to the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
