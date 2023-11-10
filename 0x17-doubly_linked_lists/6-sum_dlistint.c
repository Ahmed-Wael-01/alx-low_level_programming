#include "lists.h"

/**
 * sum_dlistint - sums all the elements
 * @head: the head of the list
 *
 * Description: it calculates the sum of all the elements in a list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
