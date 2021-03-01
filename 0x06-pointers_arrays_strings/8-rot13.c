#include "holberton.h"
/**
 * rot13 - Function that encodes a string using rot13.
 * @str: pointer from string.
 *
 * Return: returning a char.
 */
char *rot13(char *str)
{
	int i, k;
	char no_rot[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char yes_rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (str[i] == no_rot[k])
			{
				str[i] = yes_rot[k];
				break;
			}
		}
	}
	return (str);
}
