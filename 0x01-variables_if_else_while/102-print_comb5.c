#include <stdio.h>
/**
 * main - This programm prints a crazy program about numbers
 * Return: returning 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (m = j; m <= 9; m++)
				{
					if (i != k || j != m)
					{
						putchar('0' + i);

						putchar('0' + j);

						putchar(' ');

						putchar('0' + k);

						putchar('0' + m);

						if (i != 9 || j != 8 || k != 9 || m != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
