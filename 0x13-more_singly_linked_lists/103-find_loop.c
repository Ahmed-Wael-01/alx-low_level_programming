#include "lists.h"

/**
 * find_listint_loop - find spirals
 * @head: the list
 *
 * Description: does something
 * Return: 0
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle;
	listint_t *rabbit;

	while (turtle != NULL && rabbit != NULL && rabbit->next != NULL)
	{
		turtle = turtle->next;
		rabbit = rabbit->next->next;

		if (turtle == rabbit)
			return (turtle);
	}
	return (NULL);
}
