#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and displays the result.
 * @argc: The number of arguments.
 * @argv: an array containing all the arguments.
 *
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
