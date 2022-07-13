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

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++) 
		*(dest + i) = '\0';

	return (dest);
}
