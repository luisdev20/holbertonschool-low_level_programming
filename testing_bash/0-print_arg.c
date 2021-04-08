#include <stdio.h>

int main(int __attribute__((unused)) ac, char **av)
{
	int i;

	for (i = 0; av[i]; i++)
	{
		printf("%s ", av[i]);
	}
	printf("\n");
}
