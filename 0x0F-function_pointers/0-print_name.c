#include "function_pointers.h"

/**
 * print_name - function entry-point
 *
 * Description: prints name using function sppecified
 * @name: name to print
 * @f: pointer to function to use
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
