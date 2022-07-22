#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * digits_only - checks if a string consists of digits only.
 * @str: The string to be checked.
 *
 * Return: 1 if string contains only digits, 0 otherwise.
 */
int digits_only(const char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i++)
		if (isdigit(str[i]) == 0) /* it is not a digit */
			return (0);

	return (1);
}

/**
 * main - adds positive numbers and displays the result.
 * @argc: The number of arguments.
 * @argv: an array containing all the arguments.
 *
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!digits_only(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
