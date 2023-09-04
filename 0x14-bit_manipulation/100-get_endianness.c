#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function entry-point
 *
 * Description: checks the endianness
 * No parameters hence void
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1, *j = &i;
	char *c = (char *) j;

	if (*c)
		return (1);

	return (0);
}
