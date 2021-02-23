#include <unistd.h>
#include "holberton.h"
/**
 * print_number - This programm prints a number.
 * @n: The number valie to evaluate
 *
 * Return: no returning
 */
void print_number(int n)
{
	int count, n2, num2, div, num3;

	n2 = n;
	count = 0;
	while (n2 != 0)
	{
		n2 = n2 / 10;
		count++;
	}
	div = 1;
	for (num2 = 1; num2 < count; num2++)
	{
		div = div * 10;
	}
	if (n == 0)
		_putchar('0');
	else if (n > 0)
	{
		for (num3 = count + 1; num3 > 1; num3--)
		{
			_putchar((n / div) % 10 + '0');
			div = div / 10;
		}
	}
	else
	{
		_putchar('-');
		for (num3 = count + 1; num3 > 1; num3--)
		{
			_putchar(-1 * ((n / div) % 10) + '0');
			div = div / 10;
		}
	}
}
