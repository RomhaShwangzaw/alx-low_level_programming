#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str) - 1, stderr);
	return (1);
}
