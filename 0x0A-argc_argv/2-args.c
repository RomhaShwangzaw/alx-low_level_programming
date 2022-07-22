#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: Then number of arguments.
 * @argv: an array containing all the arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
