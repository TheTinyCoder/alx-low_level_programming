#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function entry-point
 *
 * Description: finds length of string
 * @s: pointer to string
 * Return: length of string
 */

unsigned int _strlen(char *s)
{
	unsigned int a, b = 0;

	for (a = 0; s[a] != '\0'; a++)
		b++;
	return (b);
}

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

	s1_len = s1 == NULL || *s1 == '\0' ? 1 : _strlen(s1);
	s2_len = s2 == NULL || *s2 == '\0' ? 0 : _strlen(s2);
	n = n > s2_len ? s2_len : n;
	n = s1_len > 1 ? n : 0;
	s = malloc(sizeof(char) * (s1_len + n));
	printf("%u : %u - %u\n", s1_len, n, s1_len + n);
	if (s == NULL)
		return (NULL);
	if (s1_len == 1)
		s[0] = '\0';
	if (s1_len > 1)
	{
		for (a = 0; ; a++)
		{
			if (s1[a] == '\0')
			{
				b = a;
				break;
			}
			s[a] = s1[a];
		}
	}
	if (s1_len > 1 && s2_len > 0)
	{
		for (a = 0; a < n; a++)
		{
			if (s2[a] == '\0')
			{
				s[b] = '\0';
				break;
			}
			s[b] = s2[a], b++;
		}
	}
	return (s);
}
