#include "main.h"

/**
 * rev_string - function entry-point
 *
 * Description: reverses a string
 * @s: pointer to string (char array)
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0, y = 0;
	char temp;

	while (*(s + x) != '\0')
	{
		x++;
	}

	for (x--; x > y; x--)
	{
		temp = *(s + y);
		*(s + y) = *(s + x);
		*(s + x) = temp;
		y++;
	}
}
