#include "lists.h"

/**
 * add_node - returns number of elements
 * @head: a node
 * @str: a var
 *
 * Description: it does something
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new_head->str)
		{
			free(new);
			return (NULL);
		}
		new->len = strlen(new->str);
	}
	new->next = *head;
	*head = new;
	return (new);
}
