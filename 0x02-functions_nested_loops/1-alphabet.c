#include <unistd.h>
#include "holberton.h"
/**
 * print_alphabet - This programm prints the alphabet in lowercase.
 * Return: returning 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
