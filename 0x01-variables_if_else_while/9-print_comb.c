#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = '0';
	while (c <= '8')
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('9');

	return (0);
}
