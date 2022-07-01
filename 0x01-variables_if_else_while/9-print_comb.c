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
	d = '0';
	while (c <= '9')
	{
		while (d <= 9)
		{
			putchar(c);
			putchar(d);
			putchar(',');
			putchar(' ');
			d++;
		}
		d = '0';
		c++;
	}

	return (0);
}
