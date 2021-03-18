#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Function that return the number of elements in list_t
 * @h: strings of the list list_t
 *
 * Return: returning number of nodes in size_t.
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
