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
	unsigned long long a, b, c, i;

	a = 1;
	b = 2;
	printf("%llu, %llu", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %llu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
