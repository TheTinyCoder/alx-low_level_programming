#include "main.h"

/**
 * *_memcpy -  function entry-point
 *
 * Description: 'copies memory area'
 * @dest: pointer to string
 * @src: pointer to string
 * @n: integer
 * Return: pointer to string s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		/*
		 * if (dest[i] == '\0')
		 * break;
		*/
		dest[i] = src[i];
	}
	return (dest);
}
