#include <unistd.h>
#include "holberton.h"
/**
 * print_numbers - This programm that prints 10 times the numbers, from 0 to 14
 *
 * Return: no returning
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i);
		_putchar('\n');
	}
}
