#include <stdio.h>

/**
 * main - prints the sum of the even-valued Fibonacci terms,
 * that do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, c, sum;

	a = 1;
	b = 2;
	c = 0;
	sum = 2;
	while (c < 4000000)
	{
		c = a + b;
		if (c % 2 == 0 && c < 4000000)
			sum += c;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

	return (0);
}
