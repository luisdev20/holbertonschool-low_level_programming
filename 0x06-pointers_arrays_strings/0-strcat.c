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
	int len_dest, len_src;
	int count;

	count = 0;
	while (src[count] != '\0')
		count++;
	len_src = count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	len_dest = count;

	for (count = 0; count <= len_src; count++)
		dest[len_src + count] = src[count];
	dest[len_dest + count] = '\0';

	return (dest);
}
