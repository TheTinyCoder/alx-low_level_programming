#include "main.h"

/**
 * factorial -  function entry-point
 *
 * Description: 'returns the factorial of a given number'
 * @n: integer
 * Return: integer
 */

int factorial(int n)
{
	int p;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	p = n;
	p--;
	return (n * factorial(p));
}
