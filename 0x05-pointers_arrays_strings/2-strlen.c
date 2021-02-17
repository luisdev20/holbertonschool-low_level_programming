#include "holberton.h"
/**
 * _strlen - This programm that returns the length of a string.
 * @s: The string to count.
 *
 * Return: return 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
