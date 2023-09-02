#include "main.h"

/**
 * print_binary - function entry-point
 *
 * Description: prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}
	if ((n >> 1) != 0)
		print_binary(n >> 1);
	_putchar(n - ((n >> 1) * 2) + 48);
}
