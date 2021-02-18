#include "holberton.h"
/**
 * _strncat - This function concatenates two strings.
 * @dest: pointer to buffer point.
 * @src: pointer to string point.
 * @n: 
 *
 * Return: returning a char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len;
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;

	i = 0;
	while (src[i] != '\0')
		i++;
	src_len = i;

	for (i = 0; i < src_len && i < n; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
