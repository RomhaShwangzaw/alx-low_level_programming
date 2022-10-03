#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: The string to be concatenated to.
 * @src: The string to be concatenated.
 * Return: the dest pointer.
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = _strlen(dest);
	for (i = 0; i < _strlen(src); i++)
		*(dest + len + i) = *(src + i);
	*(dest + len + i) = '\0';

	return (dest);
}
