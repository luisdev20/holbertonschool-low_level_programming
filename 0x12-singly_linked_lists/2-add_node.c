#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Function that adds a new node at the end of a list_t.
 * @head: strings of the list list_t
 * @str: strings of the list list_t
 *
 * Return: returning number of nodes in size_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	if (str == NULL)
		return (NULL);

	else
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
	}

	for (len = 0; str[len]; len++)
	{}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
