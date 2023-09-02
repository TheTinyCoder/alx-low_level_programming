#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function entry-point
 *
 * Description: converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, k = 1;

	if (!b)
		return (0);
	for (; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
	}
	for (; i > 0; i--)
		j += k * (b[i - 1] - 48), k *= 2;
	return (j);
}
