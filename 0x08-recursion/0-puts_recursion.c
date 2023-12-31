#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion -  function entry-point
 *
 * Description: 'prints a string, followed by a new line'
 * @s: pointer to a string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
