#include "holberton.h"
/**
 * print_times_table - This programm prints the n times table, starting with 0.
 * @n: entry value.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a;
	int b;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
					_putchar('0');
				else if (a * b > 99)
				{
					_putchar('0' + (a * b) / 100);
					_putchar('0' + ((a * b) % 100) / 10);
					_putchar('0' + (a * b) % 10);
				}
				else if (a * b > 9)
				{
					_putchar(' ');
					_putchar('0' + (a * b) / 10);
					_putchar('0' + (a * b) % 10);
				}
				else if (a * b <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(a * b + '0');
				}
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
