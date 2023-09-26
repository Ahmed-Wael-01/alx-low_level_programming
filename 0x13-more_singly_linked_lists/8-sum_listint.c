#include "lists.h"

/**
 * sum_listint - returns sum
 * @head: the list
 *
 * Description: it does something
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
