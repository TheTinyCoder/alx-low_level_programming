#include "main.h"

/**
 * *cap_string -  function entry-point
 *
 * Description: 'capitalizes all words of a string'
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	int k[14] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (s[i] > 96 && s[i] < 123)
		s[i] -= 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == k[j])
			{
				if (s[i + 1] > 96 && s[i + 1] < 123)
					s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
