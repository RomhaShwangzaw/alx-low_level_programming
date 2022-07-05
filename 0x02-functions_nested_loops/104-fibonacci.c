#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long double a, b, c, i;

	a = 1;
	b = 2;
	printf("%.0Lf, %.0Lf", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %.0Lf", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
