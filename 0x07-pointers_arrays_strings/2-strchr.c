#include "main.h"
#include <stdio.h>

/**
 * *_strchr -  function entry-point
 *
 * Description: 'locates a character in a string'
 * @s: pointer to string
 * @c: character
 * Return: pointer to first occurrence or null
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0, j = 0;

	for (;; i++)
	{
		if (s[i] == c)
		{
			j = i;
			break;
		}
		if (s[i] == '\0')
		{
			break;
		}
	}
	if (j == 0)
		return (NULL);
	return ((s + j));
}
