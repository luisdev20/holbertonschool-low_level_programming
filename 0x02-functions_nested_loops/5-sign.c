#include <unistd.h>
#include "holberton.h"
/**
 * print_sign - This programm prints the sign of a number.
 * @n: The entry to analize
 *
 * Return: returning 0
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
