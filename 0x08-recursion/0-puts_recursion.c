#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string, followed by a new line, using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(++s);
}
