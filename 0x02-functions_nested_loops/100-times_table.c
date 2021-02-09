#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
 * print_times_table - This programm prints the n times table, starting with 0.
 * @n: entry value.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a;
	int b;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
				{
					printf("0");
				}
				else if (a * b > 99)
				{
					printf("%d", a * b);
				}
				else if (a * b > 9)
				{
					printf(" %d", a * b);
				}
				else if (a * b <= 9)
				{
					printf("  %d", a * b);
				}
				if (b != n)
				{
					printf(", ");
				}
				else
				{
					printf("\n");
				}
			}
		}
	}
}
