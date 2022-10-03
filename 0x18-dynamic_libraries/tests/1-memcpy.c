#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: The memory area to be copied to.
 * @src: The memory area to copy from.
 * @n: The number of bytes to be copied.
 * Return: a pointer to the memory area 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
