#include "main.h"

/**
 * _print_rev_recursion -  function entry-point
 *
 * Description: 'prints a string in reverse'
 * @s: pointer to a string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char *t;
	t = s;
	if (*s == '\0')
	{
		return;
	}
	t++;
	_print_rev_recursion(t);
	_putchar(*s);
}
