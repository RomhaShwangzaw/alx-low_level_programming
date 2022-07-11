#include "main.h"

void _strcpy(char *str1, char *str2);

/**
 * rev_string - reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int i, j;
	char tmp[100];

	_strcpy(tmp, s);
	for (i = _strlen(tmp) - 1, j = 0; j < _strlen(s); i--, j++)
		s[j] = tmp[i];
}

/**
 * _strcpy - copies one string to another.
 * @str1: The string to be copied to.
 * @str2: The string to be copied.
 */
void _strcpy(char *str1, char *str2)
{
	int i;

	for (i = 0; i < _strlen(str2); i++)
		*(str1 + i) = *(str2 + i);
	*(str1 + i) = '\0';
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
