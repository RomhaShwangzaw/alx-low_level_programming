#include <stdio.h>

/**
 * sum_of_multiples - prints the sum of all the multiples of 3 or 5 below 1024.
 *
 */
void sum_of_multiples(void)
{
	int n, sum;
	
	n = 0;
	sum = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
		n++;
	}
	printf("%d\n", sum);
}
