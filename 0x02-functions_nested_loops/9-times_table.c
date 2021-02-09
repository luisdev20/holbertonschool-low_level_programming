#include <unistd.h>
#include "holberton.h"
/**
 * times_table - This programm prints the 9 times table, starting with 0.
 *
 * Return: returning 0
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b == 0)
			{
				_putchar('0');

			}
			else if (a * b <= 9)
			{
				_putchar(' ');
				_putchar('0' + a * b);
			}
			else if (a * b >= 10)
			{
				_putchar('0' + (a * b) / 10);
				_putchar('0' + (a * b) % 10);
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
