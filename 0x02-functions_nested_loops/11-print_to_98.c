#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
 * print_to_98 - This programm prints all natural numbers from n to 98.
 * @n: entry value.
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 97; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}

	else if (n == 98)
	{
		printf("98\n");
	}

	else
	{
		for (i = n; i > 99; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}
