#include "main.h"

/**
 * _isupper - function entrypoint
 *
 * Description: checks for uppercase character
 * @c: integer
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
