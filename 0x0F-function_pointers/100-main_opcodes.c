#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: The number of arguments passed to the program.
 * @argv: The argument list.
 * Return: 0 on success, or exit on failure.
 */
int main(int argc, char *argv[])
{
	unsigned char *f;
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	f = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(f + i));
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
