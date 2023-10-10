#include "main.h"

/**
 * _atoi - function entry-point
 *
 * Description: converts string to integer
 * @s: string; char array
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int number = 0, place_value = 1, minus = 0, x = 0, y;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
			minus++;
		if (s[x] > 47 && s[x] < 58)
		{
			if (s[x + 1] > 58 || s[x + 1] < 47)
				break;
			place_value *= 10;
		}
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (s[y] > 47 && s[y] < 58)
		{
			number += ((s[y] - 48) * place_value);
			place_value /= 10;
		}
	}

	if (minus % 2 != 0)
		number *= -1;

	return (number);
}
