#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Function that prints a char.
 * @arg: argument to be analized
 *
 * Return: always void.
 */
void print_char(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Function that prints an int.
 * @arg: argument to be analized
 *
 * Return: always void.
 */
void print_int(va_list arg)
{
	int number;
	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - Function that prints a float.
 * @arg: argument to be analized
 *
 * Return: always void.
 */
void print_float(va_list arg)
{
	float decimal;
	decimal = va_arg(arg, double);
	printf("%f", decimal);
}

/**
 * print_string - Function that prints a string.
 * @arg: argument to be analized
 *
 * Return: always void.
 */
void print_string(va_list arg)
{
	char *string;
	string = va_arg(arg, char*);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - Function that prints all.
 * @format: list of types of arguments passed to the function
 *
 * Return: always int.
 */
void print_all(const char * const format, ...)
{
	int i = 0, n_types = 0;
	char *separator = "";
	va_list ap;
	printer_t tipos[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(ap, format);

	while (*(format + i))
	{
		n_types = 0;

		while (n_types < 4 && (*(format + i) != *(tipos[n_types].symbol)))
			n_types++;

		if (n_types < 4)
		{
			printf("%s", separator);
			tipos[n_types].print(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
