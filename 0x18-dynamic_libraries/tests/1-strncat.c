#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: The string to be concatenated to.
 * @src: The string to be concatenated.
 * @n: The number of bytes to be concatenated.
 * Return: the dest pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = _strlen(dest);

	if (n > _strlen(src))
		n = _strlen(src);

	for (i = 0; i < n; i++)
		*(dest + len + i) = *(src + i);
	*(dest + len + i) = '\0';

	return (dest);
}
