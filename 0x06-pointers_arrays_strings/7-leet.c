#include "holberton.h"
/**
 * leet - Function that encodes a string into 1337.
 * @str: pointer to srting.
 *
 * Return: returning a char.
 */
char *leet(char *str)
{
	char num[5] = {'4', '3', '0', '7', '1'};
	char letter[5] = {'a', 'e', 'o', 't', 'l'};
	int i, k;

	for (k = 0; k <= 5; k++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == letter[k] || str[i] == letter[k] - 32)
				str[i] = num[k];
		}
	}
	return (str);
}
