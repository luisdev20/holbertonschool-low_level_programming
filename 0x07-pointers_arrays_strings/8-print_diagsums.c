#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of diagonals of sqr matrix.
 * @a: array pointed.
 * @size: number of rows and columns of the square.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, a_sum, b_sum;

	a_sum = 0;
	b_sum = 0;
	for (i = 0; i < size; i++)
	{
		a_sum += *(a + i * (size + 1));
		b_sum += *(a + (i + 1) * (size - 1));
	}
	printf("%d, %d\n", a_sum, b_sum);
}
