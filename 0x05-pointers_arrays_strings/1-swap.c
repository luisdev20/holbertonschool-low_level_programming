#include "holberton.h"
/**
 * swap_int - This programm swaps the values of two integers.
 * @a: The number one to swap.
 * @b: The number two to swap.
 *
 * Return: no returning.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = *(&c);
}
