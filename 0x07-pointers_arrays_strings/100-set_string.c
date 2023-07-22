#include "main.h"
#include <stdio.h>

/**
 * set_string -  function entry-point
 *
 * Description: 'sets the value of a pointer to a char'
 * @s: pointer to pointer to string
 * @to: pointer to string
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
