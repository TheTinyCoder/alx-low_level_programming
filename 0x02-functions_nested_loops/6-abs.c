#include <stdio.h>
#include "main.h"

/**
 * _abs -  function entry-point
 *
 * Description: 'computes absolute value of an integer'
 * @n: integer
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
