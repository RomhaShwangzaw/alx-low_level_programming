#include "main.h"

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
