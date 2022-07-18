#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: The string.
 * @needle: The substring to be searched.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int j, i = 0, len_h = 0, len_n = 0, len_diff = 0;

	while (haystack[len_h] != '\0')
		len_h++;

	while (needle[len_n] != '\0')
		len_n++;

	len_diff = len_h - len_n;

	while (*haystack != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*(haystack + j) != needle[j])
				break;
			if (j == len_n - 1)
				return (haystack);
		}

		haystack++;
		i++;
		if (i > len_diff)
			break;
	}

	return (NULL);
}
