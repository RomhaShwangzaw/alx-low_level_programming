#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, d, e, f, flag;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
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
			for (; e <= '9'; e++)
			{
				if (flag)
					f = '0';
				for (; f <= '9'; f++)
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
				}
				flag = 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
