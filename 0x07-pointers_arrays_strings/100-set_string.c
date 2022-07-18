#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: The double pointer, whose value is to be set.
 * @to: The value to be set to s.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
