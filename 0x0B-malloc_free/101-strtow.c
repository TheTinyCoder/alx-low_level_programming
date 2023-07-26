#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - function entry-point
 *
 * Description: counts words in a string
 * @str: pointer to string
 * Return: number of words
 */

int word_count(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			j++;
		}
	}
	return (j);
}

/**
 * **strtow - function entry-point
 *
 * Description: splits a string into words
 * @str: pointer to string
 * Return: pointer to string
 */

char **strtow(char *str)
{
	int i, j, k = 0, l, len, words;
	char **a;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_count(str);
	if (words == 0)
		return (NULL);
	a = (char **)malloc(sizeof(char *) * (words));
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		len = 0;
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			j = i;
			for (; str[j] != ' '; j++)
			{
				len++;
				if (str[j + 1] == ' ')
				{
					a[k] = (char *)malloc(sizeof(char) * (len + 1));
					for (l = 0; ; l++)
					{
					a[k][l] = str[i], i++;
					if (i == j + 1)
					{
						a[k][l + 1] = '\0';
						break;
					}
					}
					k++;
					break;
				}
			}
		}
	}
	a[k] = NULL;
	return (a);
}
