#include "main.h"

/**
 * *_strcat -  function entry-point
 *
 * Description: 'concatenates two strings'
 * @dest: string
 * @src: string
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (i >= 0)
	{
		if (dest[i] == '\0')
			break;
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
