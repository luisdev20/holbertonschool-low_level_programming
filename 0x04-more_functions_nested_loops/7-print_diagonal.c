#include <unistd.h>
#include "holberton.h"
/**
 * print_diagonal - This programm draws a diagonal line on the terminal.
 * @n: The lenght of the line
 *
 * Return: no returning
 */
void print_diagonal(int n)
{
	int v;
	int h;

	if (n > 0)
	{
		for (v = 1; v <= n; v++)
		{
			for (h = 1; h < v; h++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
