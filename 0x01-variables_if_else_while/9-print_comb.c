#include <stdio.h>
/**
 * main - This programm prints the digits 0 to 9
 * Return: returning 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
