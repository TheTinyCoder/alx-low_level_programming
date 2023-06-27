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
	int number = 0, place_value = 1, plus = 0, minus = 0, x = 0, y, z = 0;

	while (s[x] != '\0')
	{
		if (s[x] == '+')
			plus++;
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
			
			if (number == 2147483640 && s[y + 1] == 56)
			{
				z = 1;
				break;
			}

		}
	}

	if (minus > plus)
		number *= -1;

	if (z == 1)
		number -= 8;

	return (number);
}
