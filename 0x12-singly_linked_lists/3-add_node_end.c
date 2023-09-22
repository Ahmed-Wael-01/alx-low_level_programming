#include "lists.h"
#include <string.h>

/**
 * _strlen - does something
 * @s: a variable
 *
 * Description: a function
 * Return: 0
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - returns number of elements
 * @head: a node
 * @str: a var
 *
 * Description: it does something
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new;
	}
	return (new);
}
