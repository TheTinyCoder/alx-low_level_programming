#include "main.h"

/**
 * count_char -  function entry-point
 *
 * Description: 'counts characters in s'
 * @s: pointer to a string
 * @count: integer
 * Return: char
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
 * @s: pointer to a string
 * @count: integer
 * @index: integer
 * Return: 1 if s is palindrome, 0 otherwise
 */

int compare(char *s, int count, int index)
{
	if (index >= count)
		return (1);

	if (s[index] == s[count])
	{
		index++;
		count--;
		return (compare(s, count, index));
	}
	return (0);	
}

/**
 * is_palindrome -  function entry-point
 *
 * Description: 'checks if s is a palindrome'
 * @s: integer
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int count, index;

	count = count_char(s, 0);
	index = 0;
	if (s[index] == s[count])
	{
		index++;
		count--;
		return (compare(s, count, index));
	}
	return (0);
}
