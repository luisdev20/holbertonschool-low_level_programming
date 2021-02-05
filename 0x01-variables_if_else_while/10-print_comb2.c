#include <stdio.h>
/**
 * main - This programm prints the digits 0 to 9
 * Return: returning 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{

			putchar('0' + i);

			putchar('0' + j);

			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
}
