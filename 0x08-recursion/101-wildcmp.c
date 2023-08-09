#include "main.h"
#include <stdio.h>
/**
 * count_char -  function entry-point
 *
 * Description: 'counts characters in s'
 * @s: pointer to a string
 * @count: integer
 * Return: last index of s before '\0'
 */

int count_char(char *s, int count)
{
	if (*s == '\0')
		return (count - 1);
	count++;
	s++;
	return (count_char(s, count));
}

/**
 * compare -  function entry-point
 *
 * Description: 'compares characters in s'
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @index1: integer- last index of s1
 * @index2: integer- last index of s2
 * Return: 1 if s1 & s2 are identical, 0 otherwise
 */


/**
 * wildcmp -  function entry-point
 *
 * Description: 'compares two strings and returns 1 if identical'
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{}
