#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * random_password_generator - randomly generates password of length N
 */
void random_password_generator(void)
{
	int i = 0;
	int n = 10;
	int randomizer = 0;
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[n];

	srand((unsigned int)(time(NULL)));
	randomizer = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
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
