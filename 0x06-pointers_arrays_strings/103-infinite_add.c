#include "main.h"
#include <stdio.h>
/**
 * infinite_add -  function entry-point
 *
 * Description: 'adds two numbers'
 * @n1: number as string
 * @n2: number as string
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: addition result as string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l, m, n;

	for (; n1[i] != '\0'; i++)
		;
	for (; n2[j] != '\0'; j++)
		;
	if (i > size_r - 2 || j > size_r - 2)
		return (0);
	for (l = size_r - 2; l >= 0; l--)
		r[l] = 0;
	l = i > j ? i : j;
	l = (n1[0] + n2[0]) - 96 > 9 ? l : l - 1;
	i--, j--;
	for (; l >= 0; l--)
	{
		m = i >= 0 ? n1[i] : 48;
		n = j >= 0 ? n2[j] : 48;
		r[l] = (((m + n) - 96 + k) % 10) + 48;
		k = ((m + n) - 96 + k) / 10;
		i--, j--;
	}
	return (r);
}
