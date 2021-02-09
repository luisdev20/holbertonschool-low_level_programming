#include <unistd.h>
#include "holberton.h"
/**
 * main - This programm prints the alphabet in lowercase.
 * Return: returning 0
 */
void print_alphabet(void)
{
	char i;
	int _putchar(char c);

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
