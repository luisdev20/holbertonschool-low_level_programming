#include <unistd.h>
#include "holberton.h"
/**
 * print_numbers - This programm checks for uppercase character.
 *
 * Return: no returning
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
