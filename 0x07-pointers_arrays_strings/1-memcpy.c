#include "holberton.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: pointer to a char.
 * @b: constant byte.
 * @n: number of bytes to be filled.
 *
 * Return: returning a pointer to a char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
