#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function entry-point
 *
 * Description: compares two strings
 * s1: string
 * s2: string (that can contain the special character '*')
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 != *s2 && *(s2 - 1) == '*')
		return (wildcmp(s1 + 1, s2));
	return (0);
}
