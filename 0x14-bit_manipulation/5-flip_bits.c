#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function entry-point
 *
 * Description: checks no. of bits you'd flip when changing from n to m
 * @n: number
 * @m: number
 * Return: number of bits that would be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		if ((n - ((n >> 1) * 2)) != (m - ((m >> 1) * 2)))
			count++;
		n = n >> 1, m = m >> 1;
	}

	return (count);
}
