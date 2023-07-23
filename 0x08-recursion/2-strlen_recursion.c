#include "main.h"

/**
 * _strlen_recursion -  function entry-point
 *
 * Description: 'prints a string in reverse'
 * @s: pointer to a string
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return ((1 + _strlen_recursion(s)));
}
