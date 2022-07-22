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
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
