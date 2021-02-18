#include "holberton.h"
/**
 * _strcat - This function concatenates two strings.
 * @dest: pointer to buffer point.
 * @src: pointer to string point.
 *
 * Return: returning a char.
 */
char *_strcat(char *dest, char *src)
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

	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
