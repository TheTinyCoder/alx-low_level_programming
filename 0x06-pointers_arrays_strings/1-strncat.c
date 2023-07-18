#include "main.h"

/**
 * *_strncat -  function entry-point
 *
 * Description: 'concatenates two strings until byte n'
 * @dest: string
 * @src: string
 * @n: integer
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (i >= 0)
	{
		if (dest[i] == '\0')
			break;
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
