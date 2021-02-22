#include "holberton.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: pointer to a char.
 * @b: constant byte.
 * @n: number of bytes to be filled.
 *
 * Return: returning a pointer to a char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
