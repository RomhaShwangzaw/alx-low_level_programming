#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: The string to be converted.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i, j, begin, end, num, count, tmp_sum, tmp_count;

	count = 0;
	num = 0;
	begin = _strlen(s);
	end = _strlen(s) - 1;
	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			begin = i;
			for (; i < _strlen(s); i++)
			{
				if (s[i] < '0' || s[i] > '9')
				{
					end = i - 1;
					break;
				}
				count++;
			}
			break;
		}
	}

	for (i = begin; i <= end; i++)
	{
		tmp_sum = s[i] - '0';
		tmp_count = count;
		for (j = 0; j < tmp_count - 1; j++)
			tmp_sum *= 10;
		count--;
		if (i == end && s[begin - 1] == '-')
			num = -num - tmp_sum;
		else
			num += tmp_sum;
	}
	return (num);
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
