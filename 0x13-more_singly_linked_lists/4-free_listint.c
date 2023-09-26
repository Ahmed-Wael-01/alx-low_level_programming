#include "lists.h"

/**
 * free_listint - frees the dogs
 * @head: head of the list
 *
 * Description: it does something
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
