#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	char tmp[100] = {0};

	if (strlen(s) == 0)
		return;

	strncpy(tmp, s, strlen(s) - 1);

	_putchar(s[strlen(s) - 1]);
	_print_rev_recursion(tmp);
}
