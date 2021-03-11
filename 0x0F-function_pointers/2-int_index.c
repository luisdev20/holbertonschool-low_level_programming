#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Function that searches for an integer.
 * @array: array
 * @size: size of the array
 * @cmp pointer to the function you need to use.
 *
 * Return: always void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
