#include <stdlib.h>

int rand()
{
	static int count = -1;
	int numbers[6] = {8, 8, 7, 9, 23, 74};

	if (count < 6)
		return (numbers[count++]);
	return (numbers[4]);
}
