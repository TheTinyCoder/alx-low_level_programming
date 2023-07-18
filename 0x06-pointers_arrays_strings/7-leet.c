#include "main.h"

/**
 * *leet -  function entry-point
 *
 * Description: 'encodes a string into 1337'
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i, j;
	int k[6] = {52, 51, 48, 55, 49};
	char l[6] = {'A', 'E', 'O', 'T', 'L'};
	char m[6] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == l[j] || s[i] == m[j])
				s[i] = k[j];
		}
	}

	return (s);
}
