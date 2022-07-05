#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	uintmax_t a, b, c, i;

	a = 1;
	b = 2;
	printf("%ju, %ju", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %ju", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
