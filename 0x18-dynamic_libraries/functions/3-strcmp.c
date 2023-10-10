#include "main.h"

/**
 * _strcmp -  function entry-point
 *
 * Description: 'compares two strings'
 * @s1: string
 * @s2: string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
	}

	return (j);
}
