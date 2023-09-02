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
	unsigned long int j;

	for (j = 0; j <= index; j++)
	{
		if (n == 1 && index > j)
			return (0);
		if (j == index)
			return (n % 2);
		n /= 2;
	}

	return (-1);
}
