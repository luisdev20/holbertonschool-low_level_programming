#include "holberton.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: pointer to a char.
 *
 * Return: void.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
