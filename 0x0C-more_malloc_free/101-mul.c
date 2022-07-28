#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_error - prints error message to the standard output, and exits with
 * a status of 98.
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * calc_product - calculates the product of two numbers, and prints it.
 * @a: The reversed version of the first number.
 * @b: The reversed version of the second number.
 * @len1: The string length of the first number.
 * @len2: The string length of the second number.
 * Return: Nothing.
 */
void calc_product(int *a, int *b, int len1, int len2)
{
	int *product;
	int i, j, tmp;

	product = malloc(sizeof(*product) * (len1 + len2));
	if (product == NULL)
	{
		free(a);
		free(b);
		print_error();
	}

	product = memset(product, 0, len1 + len2);
	for (i = 0; i < len2; i++)
		for (j = 0; j < len1; j++)
			product[i + j] += b[i] * a[j];

	for (i = 0; i < len1 + len2 - 1; i++)
	{
		tmp = product[i] / 10;
		product[i] %= 10;
		product[i + 1] += tmp;
	}

	for (i = len1 + len2 - 1; i >= 0; i--)
		if (product[i] > 0)
			break;

	if (i < 0)
		_putchar('0');

	for (; i >= 0; i--)
		_putchar(product[i] + '0');

	_putchar('\n');
	free(product);
	free(a);
	free(b);
}

/**
 * reverse_num_string - reverses a number string, but throws error if
 * a non-digit character is found.
 *
 * @numstr: The number string.
 * @len: The length of the number string.
 * Return: The reversed number string, if successful.
 */
int *reverse_num_string(char *numstr, int len)
{
	int *num;
	int i, j;

	num = malloc(sizeof(*num) * len);
	if (num == NULL)
		return (NULL);

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if (numstr[i] < '0' || numstr[i] > '9')
		{
			free(num);
			return (NULL);
		}
		num[j] = numstr[i] - '0';
	}

	return (num);
}

/**
 * main - multiplies two positive numbers, and prints the result.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int len1, len2;
	int *a, *b;

	if (argc != 3)
		print_error();

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	a = reverse_num_string(argv[1], len1);
	if (a == NULL)
		print_error();

	b = reverse_num_string(argv[2], len2);
	if (b == NULL)
	{
		free(a);
		print_error();
	}

	calc_product(a, b, len1, len2);
	return (0);
}
