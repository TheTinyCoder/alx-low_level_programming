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
	int i, j;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		if (src[i] == 0)
			j = 1;
		
		if (j == 1)
			dest[i] = 0;
		else
			dest[i] = src[i];
	}

	return (dest);
}
