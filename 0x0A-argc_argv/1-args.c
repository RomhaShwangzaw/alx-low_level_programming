#include <stdio.h>

/**
 * main - prints the number of arguments passed into it, followed by a new line
 * @argc: Then number of arguments.
 * @argv: an array containing all the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
