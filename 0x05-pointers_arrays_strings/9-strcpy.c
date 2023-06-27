#include "main.h"

/**
 * _strcpy - function entry-point
 *
 * Description: copies 'src' string to 'dest'
 * @src: string; char array
 * @dest: string; char array
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (x >= 0)
	{
		dest[x] = src[x];
		if (src[x] == '\0')
			break;
		x++;
	}

	return (dest);
}
