#include "main.h"
#include <stdio.h>
/**
 * *_memset -  function entry-point
 *
 * Description: 'fills memory with a constant byte'
 * @s: pointer to string
 * @b: character
 * @n: integer
 * Return: pointer to string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
