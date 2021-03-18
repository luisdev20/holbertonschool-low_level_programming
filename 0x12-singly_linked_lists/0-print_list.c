#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - Function to print all elements of a list_t list
 * @h: strings of the list list_t
 *
 * Return: returning number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
