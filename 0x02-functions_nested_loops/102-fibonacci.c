#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, i;

	a = 1;
	b = 2;
	printf("%d, %d", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
