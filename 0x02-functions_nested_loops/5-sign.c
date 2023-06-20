#include <stdio.h>
#include "main.h"

/**
 * print_sign -  function entry-point
 *
 * Description: 'checks if no. is +ve, -ve or 0'
 * @n: integer
 * Return: 1 if +, 0 if 0 and -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
