#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function entry-point
 *
 * Description:  returns a pointer to a new mem allocation with copy of str
 * @str: pointer to string
 * Return: NULL if size is 0, pointer to array otherwise
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *a;

	if (str == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		;
	a = (char *)malloc(sizeof(char) * i);

	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
