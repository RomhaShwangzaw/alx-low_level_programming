#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, sum;
	char password[100];

	i = sum = 0;

	srand(time(NULL));

	while (sum < (2772 - (32 + 94)))
	{
		password[i] = 32 + rand() % 95;
		sum += password[i];
		printf("%c", password[i]);
		i++;
	}
	password[i] = 2772 - sum;
	printf("%c", password[i]);

	return (0);
}
