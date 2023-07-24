#include "main.h"
/**
 * sqrt_by_subtraction - function entry-point
 *
 * Description: 'finds square root by repeated subtraction'
 * @n: integer to find square-root of
 * @count: number of subtractions
 * @sub: integer to subtract from
 * Return: integer
 */

int sqrt_by_subtraction(int n, int count, int sub)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (count);
	n -= sub;
	count++;
	sub += 2;
	return (sqrt_by_subtraction(n, count, sub));
}

/**
 * _sqrt_recursion -  function entry-point
 *
 * Description: 'returns the natural square root of a number'
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int count, sub;

	if (n < 0)
		return (-1);
	count = 0;
	sub = 1;
	return (sqrt_by_subtraction(n, count, sub));
}
