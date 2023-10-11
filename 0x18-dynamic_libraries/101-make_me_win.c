#include <stdlib.h>

/**
 * rand - Overrides the standard library's rand function to ensure
 * winning numbers in the Giga Millions game.
 *
 * When called, it returns a sequence of predetermined winning numbers.
 *
 * Return: The next winning number in the sequence.
 */

int rand(void)
{
	static int count;
	int numbers[6] = {9, 5, 70, 47, 65, 8};

	if (count < 6)
		return (numbers[count++]);
	return (count * count % 30000);
}
