#include <unistd.h>
#include "holberton.h"
/**
 * print_square - This programm that prints 10 times the numbers, from 0 to 14
 * @size: Inserts the size of the square
 *
 * Return: no returning
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
