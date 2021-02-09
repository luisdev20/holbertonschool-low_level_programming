#include "holberton.h"
/**
 * main - This programm prints the alphabet in lowercase.
 * Return: returning 0
 */
int main(void)
{
	int i;
	char word[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};

	for (i = 0; i <= 9; i++)
	{
		_putchar(word[i]);
	}

	return (0);
}
