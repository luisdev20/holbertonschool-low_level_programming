#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int argc, char *argv[])
{
	int i, digit;
	int sum = 0;

	if (argc ==  1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (digit = 0; argv[i][digit] != '\0'; digit++)
			{
				if (argv[i][digit] > '9' || argv[i][digit] < '0')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
