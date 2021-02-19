#include "holberton.h"
/**
 * reverse_array - This function reverses the content of an array of integers.
 * @a: pointer of an array.
 * @n: number of array elements.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int c;
	int *back;
	int *end;
	int temp;

	back = a;
	end = a;

	for (c = 0; c < n - 1; c++)
		end++;

	for (c = 0; c < n / 2; c++)
	{
		temp = *end;
		*end = *back;
		*back = temp;

		back++;
		end--;
	}
}
