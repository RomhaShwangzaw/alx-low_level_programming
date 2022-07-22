#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers and displays the result.
 * @argc: The number of arguments.
 * @argv: an array containing all the arguments.
 *
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	long int i, num, sum = 0;
	char *end;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &end, 10);
		if (end == argv[i])
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%ld\n", sum);

	return (0);
}
