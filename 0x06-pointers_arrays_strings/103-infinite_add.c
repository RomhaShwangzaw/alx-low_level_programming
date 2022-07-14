#include "main.h"

void rev_string(char *s);
char *_strcpy(char *dest, char *src);

/**
 * infinite_add - adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer that the function will use to store the result.
 * @size_r: The buffer size.
 * Return: A pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, tmp = 0;
	char x1[100], x2[100], sum[100];

	_strcpy(x1, n1);
	_strcpy(x2, n2);
	rev_string(x1);
	rev_string(x2);

	for (i = 0; i < _strlen(x1) && i < _strlen(x2); i++)
	{
		sum[i] = (((tmp + (x1[i] - '0') + (x2[i] - '0')) % 10) + '0');
		tmp = ((tmp + (x1[i] - '0') + (x2[i] - '0')) / 10);
	}
	if (i < _strlen(x1))
	{
		for ( ; i < _strlen(x1); i++)
		{
			sum[i] = (((tmp + (x1[i] - '0')) % 10) + '0');
			tmp = ((tmp + (x1[i] - '0')) / 10);
		}
	}
	else if (i < _strlen(x2))
	{
		for ( ; i < _strlen(x2); i++)
		{
			sum[i] = (((tmp + (x2[i] - '0')) % 10) + '0');
			tmp = ((tmp + (x2[i] - '0')) / 10);
		}
	}
	if (tmp)
		sum[i++] = tmp + '0';
	sum[i] = '\0';
	rev_string(sum);
	if (size_r < _strlen(sum) + 1)
		return ('\0');
	_strcpy(r, sum);
	return (r);
}

/**
 * rev_string - reverses a string.
 * @s: The string to be reversed.
 * Return: The reversed string.
 */
void rev_string(char *s)
{
	int i, j;
	char tmp[500];

	_strcpy(tmp, s);
	for (i = _strlen(tmp) - 1, j = 0; j < _strlen(s); i--, j++)
		s[j] = tmp[i];
}

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
