#include <unistd.h>
#include "holberton.h"
/**
 * print_alphabet - This programm prints the alphabet in lowercase.
 * Return: returning 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
