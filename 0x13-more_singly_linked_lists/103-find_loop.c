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
	listint_t *turtle = head;
	listint_t *rabbit = head;

	while (turtle != NULL && rabbit != NULL)
	{
		turtle = turtle->next;
		if (!rabbit->next->next)
			return (NULL);
		rabbit = rabbit->next->next;

		if (turtle == rabbit)
			return (turtle);
	}
	return (NULL);
}
