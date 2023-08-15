#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - function entry-point
 *
 * Description: prints parameter of type string
 * @s: string argument
 * Return: void
 */

void print_string(char *s)
{
	s == NULL ?
		printf("(nil)")
		: printf("%s", s);
}


/**
 * print_all - function entry-point
 *
 * Description: prints all parameters (of diff types)
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, k = 0;
	va_list args;
	char t;

	while (format != NULL && format[i] != '\0')
	{
		t = format[i];
		if (t == 'c' || t == 'f' || t == 'i' || t == 's')
			k++;
		i++;
	}
	va_start(args, format);
	while (j < i)
	{
		t = format[j];
		switch (t)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				k--;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				k--;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				k--;
				break;
			case 's':
				print_string(va_arg(args, char *));
				k--;
				break;
		}
		if (j < i && k > 0 && (t == 'c' || t == 'f' || t == 'i' || t == 's'))
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
