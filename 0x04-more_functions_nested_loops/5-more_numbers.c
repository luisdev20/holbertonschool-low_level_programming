#include <unistd.h>
#include "holberton.h"
/**
 * more_numbers - This programm that prints 10 times the numbers, from 0 to 14
 *
 * Return: no returning
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar(j + '0');
		_putchar('\n');
	}
}
