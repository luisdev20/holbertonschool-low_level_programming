#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - Function  that creates an array of integers.
 * @min: minimum number.
 * @max: maximum number.
 *
 * Return: returning a pointer to the allocated memory.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, nel;

	if (min > max)
		return (NULL);

	nel = max - min + 1;

	array = malloc(sizeof(int) * nel);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nel; i++)
		array[i] = min + i;

	return (array);
}
