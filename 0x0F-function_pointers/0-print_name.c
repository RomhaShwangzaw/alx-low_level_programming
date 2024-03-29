#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: The name to be printed.
 * @f: The callback function used to print the name.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
