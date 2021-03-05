#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array to allocate.
 * @size: size in bytes of each element.
 *
 * Return: returning a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	filler = array;

	for (i = 0; i < size * nmemb; i++)
		filler[i] = '\0';

	return (array);
}
