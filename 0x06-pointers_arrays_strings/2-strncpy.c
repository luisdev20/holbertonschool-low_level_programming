#include "holberton.h"
/**
 * _strncpy - This function copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to buffer point.
 * @src: pointer to string point.
 * @n: number of chars
 *
 * Return: returning a char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[j] = src[j];
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
