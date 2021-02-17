#include <stdio.h>
#include "holberton.h"
/**
 * print_array - This function prints n elements of an array of integers.
 * @a: The string to analize.
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", *a);
		a++;

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
