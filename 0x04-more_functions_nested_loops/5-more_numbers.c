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
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = 0;

			if (j > 9)
			{
				_putchar('1');
				k = 10;
			}
			_putchar((j - k) + '0');
		}
		_putchar('\n');
	}
}
