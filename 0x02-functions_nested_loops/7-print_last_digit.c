#include <unistd.h>
#include "holberton.h"
/**
 * print_last_digit - This programm prints the last digit of a number.
 * @n: The value to analize.
 *
 * Return: returning 0
 */
int print_last_digit(int n)
{
	int x = n % 10;

		if (n >= 0)
		{
			_putchar('0' + x);
			return (x);
		}
		else
		{
			_putchar('0' + x * -1);
			return (x * -1);
		}
}
