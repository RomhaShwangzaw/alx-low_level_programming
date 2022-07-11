#include "main.h"

/**
 * filter_int_from_string - filters integers from strings.
 * @s: The string to be examined.
 * @begin: The beginning index.
 * @end: The ending index.
 * @count: The number of digits in the integer.
 * @sign: The sign of the integer.
 * Return: the filtered integer.
 */
int filter_int_from_string(char *s, int begin, int end, int count, char sign)
{
	int i, j, tmp_sum, tmp_count, num;

	num = 0;
	for (i = begin; i <= end; i++)
	{
		tmp_sum = s[i] - '0';
		tmp_count = count;
		for (j = 0; j < tmp_count - 1; j++)
			tmp_sum *= 10;
		count--;
		if (i == end && sign == '-')
			num = -num - tmp_sum;
		else
			num += tmp_sum;
	}

	return (num);
}

/**
 * _atoi - converts a string to an integer.
 * @s: The string to be converted.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i, begin, end, num, count;
	char sign = '+';

	count = 0;
	begin = _strlen(s);
	end = _strlen(s) - 1;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == '-')
		{
			if (sign == '+')
				sign = '-';
			else
				sign = '+';
		}

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

	num = filter_int_from_string(s, begin, end, count, sign);
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
