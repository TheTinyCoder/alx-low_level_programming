#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function entry-point
 *
 * Description: concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: no. of bytes of s2 to concatenate
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b = 0, s1_len = 1, s2_len = 0;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	for (a = 0; s1[a] != '\0'; a++)
		s1_len++;
	for (a = 0; s2[a] != '\0'; a++)
		s2_len++;
	if (n > s2_len)
		n = s2_len;
	s = malloc(sizeof(char) * (s1_len + n));
	if (s == NULL)
		return (NULL);
	for (a = 0; ; a++)
	{
		if (s1[a] == '\0')
		{
			b = a;
			break;
		}
		s[a] = s1[a];
	}
	for (a = 0; a < n; a++)
	{
		if (s2[a] == '\0')
		{
			s[b] = '\0';
			break;
		}
		s[b] = s2[a];
		b++;
	}
	return (s);
}
