#include "holberton.h"
/**
 * set_string - Function that sets the value of a pointer to a char.
 * @s: pointer to set value
 * @to: char to receive the value.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
