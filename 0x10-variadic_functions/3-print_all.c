#include <stdio.h>
#include "variadic_functions.h"

/**
 * place_separator - places a separator, if needed.
 * @i: The format string's current index.
 * @c: The format string's current character.
 * Return: Nothing.
 */
void place_separator(unsigned int i, char c)
{
	char *type = "cifs";
	unsigned int j = 0;

	while (type[j] && i)
	{
		if (c == type[j])
		{
			printf(", ");
			return;
		}
		j++;
	}
	printf("");
}

/**
 * print_all - prints anything.
 * @format: A list of types of arguments passed to the function:
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		place_separator(i, format[i]);

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				break;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
