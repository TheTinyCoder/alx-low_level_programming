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
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}
