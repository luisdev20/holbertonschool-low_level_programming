#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - Function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: pointer to a char.
 * @c: constant byte.
 *
 * Return: returning a pointer to a char.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
