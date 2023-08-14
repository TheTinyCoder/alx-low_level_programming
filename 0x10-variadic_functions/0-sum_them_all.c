#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function entry-point
 *
 * Description: sums all of its parameters
 * @n: number of variadic arguments
 * Return: sum of variadic arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
