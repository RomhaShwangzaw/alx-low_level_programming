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

	product = malloc(sizeof(*product) * (len1 + len2 + 1));
	if (product == NULL)
	{
		free(a);
		free(b);
		print_error();
	}

	product = memset(product, 0, len1 + len2 + 1);
	for (i = 0; i < len2; i++)
		for (j = 0; j < len1; j++)
			product[i + j] += b[i] * a[j];

	for (i = 0; i < len1 + len2; i++)
	{
		tmp = product[i] / 10;
		product[i] %= 10;
		product[i + 1] += tmp;
	}

	for (i = len1 + len2; i >= 0; i--)
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
 * main - multiplies two positive numbers, and prints the result.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2;
	int *a, *b;

	if (argc != 3)
		print_error();

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	a = malloc(sizeof(*a) * len1);
	if (a == NULL)
		print_error();

	for (i = len1 - 1, j = 0; i >= 0; i--, j++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
			print_error();

		a[j] = argv[1][i] - '0';
	}

	b = malloc(sizeof(*b) * len2);
	if (b == NULL)
	{
		free(a);
		print_error();
	}

	for (i = len2 - 1, j = 0; i >= 0; i--, j++)
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
			print_error();

		b[j] = argv[2][i] - '0';
	}
	calc_product(a, b, len1, len2);
	return (0);
}
