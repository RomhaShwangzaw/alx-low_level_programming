#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string.
 * @accept: The prefix substring.
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				flag = 1;
				break;
			}
		}

		if (flag == 0)
			break;

		flag = 0;
	}

	return (len);
}
