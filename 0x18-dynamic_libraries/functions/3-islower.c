#include <stdio.h>
#include "main.h"

/**
 * _islower -  function entry-point
 *
 * Description: 'checks for lowercase character'
 * @c: integer
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}
