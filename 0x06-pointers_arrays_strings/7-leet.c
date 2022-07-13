#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: The string.
 * Return: The encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char *start = s;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; letters[j] != '\0'; j++)
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}

	return (start);
}
