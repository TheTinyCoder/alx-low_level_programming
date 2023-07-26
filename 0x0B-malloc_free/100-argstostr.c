#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function entry-point
 *
 * Description: frees a 2D grid previously allocated
 * @ac: argument count
 * @av: array of strings
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 1;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	a = (char *)malloc(sizeof(char) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		a[k] = '\n';
		k++;
	}
	return (a);
}
