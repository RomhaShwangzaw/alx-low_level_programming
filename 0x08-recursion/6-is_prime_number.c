#include "main.h"

/**
 * check_prime - checks if a number is prime using recursion.
 * @n: The number.
 * @start: The starting point.
 * Return: 1 if n is prime number, otherwise 0.
 */
int check_prime(int n, int start)
{
	if (n % start == 0)
		return (0);

	if (start > n / 2)
		return (1);

	return (check_prime(n, start + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number or not.
 * @n: The integer.
 * Return: 1 if n is prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
