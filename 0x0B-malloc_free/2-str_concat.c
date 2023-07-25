#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function entry-point
 *
 * Description:  concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: NULL on failure, pointer to string otherwise
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k = 0, l;
	char *a;

	for (; s1[i] != '\0'; i++)
		;
	i++;
	for (; s2[j] != '\0'; j++)
		;
	a = (char *)malloc(sizeof(char) * (i + j));

	if (a == NULL)
		return (NULL);
	i -= 2;
	for (; k <= i; k++)
		a[k] = s1[k];
	l = 0;
	for (; k <= i + j; k++)
	{
		a[k] = s2[l];
		l++;
	}
	return (a);
}
