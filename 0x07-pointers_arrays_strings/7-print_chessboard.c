#include "main.h"

/**
 * *_strstr -  function entry-point
 *
 * Description: 'finds 1st occurrence of string needle in haystack'
 * @haystack: pointer to string
 * @needle: pointer to string
 * Return: pointer to first occurrence or null
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
