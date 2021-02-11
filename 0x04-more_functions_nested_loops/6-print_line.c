#include <unistd.h>
#include "holberton.h"
/**
 * print_line - This programm draws a straight line in the terminal.
 * @n: The lenght of the line
 *
 * Return: no returning
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
