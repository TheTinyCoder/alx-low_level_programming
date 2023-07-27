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
	char *s, *empty;
	unsigned int a = 0, b;

	empty = "";
	s1 = s1 == NULL ? empty : s1;
	s2 = s2 == NULL ? empty : s2;
	s = malloc(sizeof(char) * (_strlen(s1) + n));
	if (s == NULL)
		return (NULL);
	for (; s1[a] != '\0'; a++)
		s[a] = s1[a];
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		s[a] = s2[b];
		a++;
	}
	return (s);
}
