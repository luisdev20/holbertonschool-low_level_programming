#include "holberton.h"
int divisors(int i, int n);
/**
 * is_prime_number - F that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: base number
 *
 * Return: an int.
 */
int is_prime_number(int n)
{
	int h;
	int i = 2;

	h = divisors(i, n);
	return (h);
}

/**
 * divisors - Finds if n have any divisords
 * @n: base number
 * @i: base number that iterate.
 *
 * Return: an int.
 */
int divisors(int i, int n)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		return (0);
	}

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (divisors(i + 1, n));
}
