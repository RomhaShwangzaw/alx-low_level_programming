#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int i, j;
	char tmp[500];

	_strcpy(tmp, s);
	for (i = _strlen(tmp) - 1, j = 0; j < _strlen(s); i--, j++)
		s[j] = tmp[i];
}

/**
 * _strcpy - copies one string to another.
 * @dest: The string to be copied to.
 * @src: The string to be copied.
 * Return: the dest pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';

	return (dest);
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
