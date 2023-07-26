#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - function entry-point
 *
 * Description: frees a 2D grid previously allocated
 * @ac: argument count
 * @av: array of strings
 * Return: pointer to string
 */

char **strtow(char *str)
{
	int i, j, k = 0, l, len, word_count = 0;
	char **a;

	if (str == NULL || *str == '\0')
		return (NULL);

	a = (char **)malloc(sizeof(char *) * 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			j = i;
			l = i;
			len = 0;
			for (; str[j] != '\0'; j++)
			{
				i++;
				len++;
				if (str[j] == ' ')
				{
					word_count += 1;
					a = (char **)realloc(a, sizeof(char *) * word_count);
					if (a == NULL)
					{
						free(a);
						return (NULL);
					}
					a[word_count - 1] = (char *)malloc(sizeof(char) * (len + 1));
					for (k = 0; k < len; k++)
					{
						if (k + 1 == len)
						{
							a[word_count - 1][k] = '\0';
							break;
						}
						a[word_count - 1][k] = str[l];
						l++;
					}
					i--;
					break;
				}
			}
		}
	}
	a = (char **)realloc(a, sizeof(char *) * (word_count + 1));
	a[word_count] = NULL;
	return (a);
}
