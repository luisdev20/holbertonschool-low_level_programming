#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - Function that searches a string for any of a set of bytes.
 * @haystack: string.
 * @needle: substring.
 *
 * Return: returning a pointer to a char.
 */
int compare(const char *haystack, const char *needle);

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
		haystack++;
	}

	return (NULL);
}

int compare(const char *haystack, const char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);

		haystack++;
		needle++;
	}

	return (*needle == '\0');
}
