#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * random_password_generator - randomly generates password of length N
 */
void random_password_generator(void)
{
	int i;
	char password[12];

	srand((unsigned int)(time(NULL)));

	for (i = 0; i < 12; i++)
	{
		password[i] = 33 + rand() % 94;
		printf("%c", password[i]);
	}
}

/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)
{
	random_password_generator();

	return (0);
}
