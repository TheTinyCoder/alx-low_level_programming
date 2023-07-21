#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk -  function entry-point
 *
 * Description: 'locates the first occurrence of char in string s in accept'
 * @s: pointer to string
 * @accept: pointer to string
 * Return: pointer to first occurrence or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k = 0, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = i;
				l = 1;
				break;
			}
		}
		if (l > 0)
			break;
	}
	if (l == 0)
		return (NULL);
	return ((s + k));
}
