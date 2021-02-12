#include <unistd.h>
#include "holberton.h"
/**
 * print_triangle - This programm prints a triangle.
 * @size: The size of the triangle
 *
 * Return: no returning
 */
void print_triangle(int size)
{
	int v;
	int h;

	if (size > 0)
	{
		for (v = 0; v < size; v++)
		{
			for (h = v; h < size - 1; h++)
				_putchar(' ');
			for (h = 0; h <= v; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
