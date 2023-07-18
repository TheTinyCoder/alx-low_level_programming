#include "main.h"

/**
 * *_strncpy -  function entry-point
 *
 * Description: 'copies a src string to dest upto byte of size n'
 * @dest: string
 * @src: string
 * @n: integer
 * Return: pointer to concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (src[i] == '\0')
	{
		for (; dest[i] != '\0'; i++)
			dest[i] = 0;
	}

	return (dest);
}
