#include <unistd.h>
#include "holberton.h"
/**
 * _isalpha - This programm checks for alphabetic character.
 * @c: The character to analize
 *
 * Return: returning 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
