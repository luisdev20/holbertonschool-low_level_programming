#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - Function that frees list_t list
 * @head: strings of the list list_t
 *
 * Return: returning number of nodes in size_t.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
