#include "main.h"

/**
 * find_sqrt - Finds the square root of a number using binary search.
 * @n: The number.
 * @start: Starting point of the search.
 * @end: Ending point of the search.
 * Return: The natural square root, if found, or -1 if not.
 */
int find_sqrt(unsigned int n, int start, int end)
{
	unsigned long mid;

	/* If n does not have a natural square root */
	if (start > end)
		return (-1);

	mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}

	else if (mid * mid < n)
	{
		start = mid + 1;
		return (find_sqrt(n, start, end));
	}

	else
	{
		end = mid - 1;
		return (find_sqrt(n, start, end));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number.
 * Return: The square root of n.
 */
int _sqrt_recursion(int n)
{
	int start = 0, end = n;

	/* If n is a negative number */
	if (n < 0)
		return (-1);

	return (find_sqrt(n, start, end));
}
