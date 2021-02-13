#include <stdio.h>
#include <math.h>
/**
 * main - This programm that pfinds and prints the largest
 * prime factor of the number 612852475143.
 *
 * Return: return 0
 */
int main(void)
{
	long num = 612852475143;
	long divisor = 2;

	while (divisor < num)
	{
		if (num % divisor == 0)
			num = num / divisor;
		else
			divisor++;
	}
	printf("%ld\n", num);
	return (0);
}
