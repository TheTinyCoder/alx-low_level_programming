#include "main.h"
#include <stdio.h>

/**
 * get_bit - function entry-point
 *
 * Description: returns the value of a bit at a given index
 * @n: number
 * @index: index, starting from 0 of the bit to get
 * Return: index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1, j;

	for (; (n >> i) != 0; i++)
		;
	if (index > (i - 1))
		return (-1);
	for (j = 0; j <= index; j++)
	{
		if (j == index)
			return (n % 2);
		n /= 2;
	}

	return (-1);
}
