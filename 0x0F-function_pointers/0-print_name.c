#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - A new struct describing a dog.
 * @name: string to print.
 * @f: pointer of function f.
 *
 * Return: always void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
