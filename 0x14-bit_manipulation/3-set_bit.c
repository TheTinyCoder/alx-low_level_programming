#include "main.h"
#include <stdio.h>

/**
 * _pow - function entry-point
 *
 * Description: calculates x to power y
 * @x: number
 * @y: number
 * Return: result of power calculation
 */
unsigned long int _pow(unsigned long int x, unsigned long int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	y--;
	return (x * _pow(x, y));
}


/**
 * set_bit - function entry-point
 *
 * Description: sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index, starting from 0 of the bit to set
 * Return: 1 on success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j, k = *n;

	for (j = 0; j <= index && index < 64; j++)
	{
		if (k == 1 && index > j)
			return (-1);
		if (j == index)
		{
			*n = *n | _pow(2, j);
			return (1);
		}
		k /= 2;
	}

	return (-1);
}
