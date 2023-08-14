#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function entry-point
 *
 * Description: prints all of its parameters
 * @separator: string to separate parameters on print
 * @n: number of variadic arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *s;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
