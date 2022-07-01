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
	int e;

	c = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			e = d + 1;
			while (e <= '9')
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (c < '7')
				{
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');

	return (0);
}
