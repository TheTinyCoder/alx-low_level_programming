#include "main.h"
#include <stdio.h>

/**
 * *_strstr -  function entry-point
 *
 * Description: 'finds 1st occurrence of char in string needle in haystack'
 * @haystack: pointer to string
 * @needle: pointer to string
 * Return: pointer to first occurrence or null
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, k, l = 0, m;

	for (; needle[i] != '\0'; i++)
		;
	for (; haystack[j] != '\0'; j++)
		;
	for (k = 0; k < j; k++)
	{
		if (haystack[k] == needle[0] && k + i <= j)
		{
			l = k;
			for (m = 0; m < i; m++)
			{
				if (haystack[l] != needle[m])
				{
					l = 0;
					break;
				}
				else
					l++;
			}
		}
	}
	if (l == 0)
		return (NULL);
	return ((haystack + (l - i - 1)));
}
