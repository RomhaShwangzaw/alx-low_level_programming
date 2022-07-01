#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	c = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			putchar(c);
			putchar(d);
			if (c < '8')
			{
				putchar(',');
				putchar(' ');
			}
			d++;
		}
		c++;
	}
	putchar('\n');

	return (0);
}
