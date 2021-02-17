#include "holberton.h"
/**
 * print_rev - This programm that prints a string, in reverse.
 * @s: The string to print.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
		while (s[i] != '\0')
			i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
