#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
		if (i % 2 == 0)
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
