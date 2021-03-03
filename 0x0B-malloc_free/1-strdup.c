#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: pointer to a string.
 *
 * Return: returning a pointer to a char.
 */
char *_strdup(char *str)
{
	char *new_str = str;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	new_str = malloc(len * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}
