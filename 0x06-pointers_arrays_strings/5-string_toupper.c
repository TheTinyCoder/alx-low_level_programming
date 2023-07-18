#include "main.h"

/**
 * *string_toupper -  function entry-point
 *
 * Description: 'changes all lowercase letters of a string to uppercase'
 * @s: string
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	}

	return (s);
}
