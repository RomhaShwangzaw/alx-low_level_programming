# include <stdio.h>
# include <math.h>

/**
 * largest_prime_factor - prints the largest prime factor of a given number n
 * @n: The number whose largest prime factor is to be printed.
 */
void largest_prime_factor(long int n)
{
	long int i, largest;

	while (n % 2 == 0)
		n = n / 2;
	largest = 2;

	/*
	 * n must be odd at this point. So we can skip
	 * one element (Note i = i + 2)
	 */
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			if (i > largest)
				largest = i;
			n = n / i;
		}
	}

	/*
	 * This condition is to handle the case when n
	 * is a prime number greater than 2
	 */
	if (n > 2)
		if (n > largest)
			largest = n;

	printf("%ld\n", largest);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;

	n = 612852475143;
	largest_prime_factor(n);
	return (0);
}
