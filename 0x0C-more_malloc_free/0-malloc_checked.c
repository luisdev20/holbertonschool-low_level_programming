#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - Function that that allocates memory using malloc.
 * @b: number of bytes to allocate.
 *
 * Return: returning a pointer void.
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);

	return(c);
}
