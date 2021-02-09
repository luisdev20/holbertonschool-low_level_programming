#include <unistd.h>
#include "holberton.h"
/**
 * _islower - This programm checks for lowercase character.
 * @c: The character to analize
 *
 * Return: returning 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
