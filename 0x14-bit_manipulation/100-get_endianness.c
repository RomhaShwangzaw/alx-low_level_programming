#include "main.h"

#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	short word = 0x0001;
	char *c = (char *)&word;

	return (*c ? LITTLE_ENDIAN : BIG_ENDIAN);
}
