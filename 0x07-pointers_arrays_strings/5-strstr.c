#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - Function that searches a string for any of a set of bytes.
 * @haystack: string.
 * @needle: substring.
 *
 * Return: returning a pointer to a char.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return (Begin);

		haystack = Begin + 1;
	}
	return (NULL);
}
