#include "main.h"
#include <stdio.h>

/**
 * _strspn -  function entry-point
 *
 * Description: 'gets the length of a prefix substring'
 * @s: pointer to string
 * @accept: pointer to string
 * Return: number of bytes in s which consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l = 0, m = 0;

	for (k = 0; accept[k] != '\0'; k++)
		;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0;; j++)
		{
			if (s[i] == accept[j])
				break;
			if (s[i] != accept[j] && j == k - 1)
			{
				l = 1;
				m = i;
			}
		}
		if (l > 0)
			break;
	}
	return (m);
}
