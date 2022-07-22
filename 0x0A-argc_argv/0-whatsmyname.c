#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line.
 * @argc: Then number of arguments.
 * @argv: an array containing all the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
