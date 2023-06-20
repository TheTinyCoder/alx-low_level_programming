#include <stdio.h>
#include "main.h"

/**
 * _isalpha -  function entry-point
 *
 * Description: 'checks for alphabetic character'
 * @c: integer
 * Return: 1 if lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}

	return (0);
}
