#include "holberton.h"
/**
 * _puts - This programm that prints a string, followed by a new line.
 * @str: The string to print.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
