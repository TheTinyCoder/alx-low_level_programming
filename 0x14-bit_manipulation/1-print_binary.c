#include "main.h"

/**
 * uint_to_binary - function entry-point
 *
 * Description: converts number to binary
 * @n: number
 * Return: void
 */

void uint_to_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}
	if ((n / 2) != 0)
		uint_to_binary(n / 2);
	_putchar((n % 2) + 48);
}


/**
 * print_binary - function entry-point
 *
 * Description: prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	uint_to_binary(n);
}
