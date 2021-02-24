#include "holberton.h"
/**
 * factorial - Function that returns the factorial of a given number.
 * @n: pointer to a int.
 *
 * Return: factorial int of a given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
