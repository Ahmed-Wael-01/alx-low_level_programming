#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth elem
 * @head: head of the list
 * @index: the desired elem
 *
 * Description: it does something
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
