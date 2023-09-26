#include "lists.h"

/**
 * reverse_listint - function
 * @head: var
 *
 * Decription: does something
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	return (pre);
}
