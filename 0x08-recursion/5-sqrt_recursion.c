#include "holberton.h"
int _sqrt(int i, int n);
/**
 * _sqrt_recursion - F that returns the natural square root of a number.
 * @n: base number
 *
 * Return: an int.
 */
int _sqrt_recursion(int n)
{
	int h;
	int i = n / 2;

	h = _sqrt(i, n);
	return (h);
}

/**
 * _sqrt - Function to calculate sqrt recusive
 * @n: base number
 * @i: base number that iterate.
 *
 * Return: an int.
 */
int _sqrt(int i, int n)
{
	if (i < 0 || n < 0)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(i - 1, n));
}
