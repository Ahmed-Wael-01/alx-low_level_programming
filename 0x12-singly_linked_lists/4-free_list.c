#include "lists.h"

/**
 * free_list - returns number of elements
 * @head: pointer to a node
 *
 * Description: it does something
 */

void free_list(list_t *head)
{
	list_t *new_head;

	while (head != NULL)
	{
		new_head = head->next;
		free(head->str);
		free(head);
		head = new_head;
	}
}
