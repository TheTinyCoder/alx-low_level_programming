#include "main.h"

/**
 * *rot13 -  function entry-point
 *
 * Description: 'encodes a string using rot13'
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int i, j;
	char k[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == k[j])
			{
				s[i] = l[j];
				break;
			}
		}
	}

	return (s);
}
