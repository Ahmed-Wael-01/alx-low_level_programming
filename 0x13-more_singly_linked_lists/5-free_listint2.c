#include "lists.h"

/**
 * free_listint2 - frees the dogs
 * @head: head of the list
 *
 * Description: it does something
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || !head || !(**head))
		return;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
