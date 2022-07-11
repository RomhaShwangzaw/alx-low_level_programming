#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string, whose second half, is to be printed.
 */
void puts_half(char *str)
{
	int i;

	for (i = _strlen(str) / 2; i < _strlen(str); i++)
		_putchar(str[i]);

	_putchar('\n');
}

/**
 * _strlen - returns the length of a string.
 * @s: The string, whose length will be calculated.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}

	return (count);
}
