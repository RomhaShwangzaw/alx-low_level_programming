#include "main.h"

/**
 * _strncpy - copies one string to another.
 * @dest: The string to be copied to.
 * @src: The string to be copied.
 * @n: The number of bytes to be copied.
 * Return: the dest pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (_strlen(src) == 0)
		return (dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++) 
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
