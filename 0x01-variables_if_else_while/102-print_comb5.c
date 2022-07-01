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
	int f;
	int flag;

	c = '0';
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			if (d < '9')
			{
				e = c;
				f = d + 1;
			}
			else
			{
				e = c + 1;
				f = '0';
			}
			flag = 0;
			while (e <= '9')
			{
				if (flag)
					f = '0';
				while (f <= '9')
				{
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);
					if (c != '9' || d != '8')
					{
						putchar(',');
						putchar(' ');
					}
					f++;
				}
				flag = 1;
				e++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');

	return (0);
}
