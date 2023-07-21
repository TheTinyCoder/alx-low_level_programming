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
	unsigned int i, j, k = 0, l = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				k = j;
				l = 1;
				break;
			}
		}
		if (l > 0)
			break;
	}
	if (l == 0)
		return (NULL);
	return ((haystack + k));
}
