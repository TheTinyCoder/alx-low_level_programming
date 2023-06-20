#include <stdio.h>
#include "main.h"

/**
 * print_last_digit -  function entry-point
 *
 * Description: 'prints last digit of number'
 * @n: integer
 * Return: last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n *= -1;

	_putchar((n) + 48);
	return (n);

}
