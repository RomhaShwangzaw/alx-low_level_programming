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
	unsigned long int a, b, c, i, a1, a2, b1, b2, c1, c2, l;

	l = 1000000000;
	a = 1;
	b = 2;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 92; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	
	a1 = a / l;
	a2 = a % l;
	b1 = b / l;
	b2 = b %l;

	for (i = 92; i < 98; i++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		printf(", %lu", c1 + (c2 / l));
		printf("%lu", c2 % l);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	printf("\n");

	return (0);
}
