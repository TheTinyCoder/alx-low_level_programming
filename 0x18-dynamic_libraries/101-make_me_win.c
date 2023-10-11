#include <stdlib.h>

int rand()
{
	static int count;
	int numbers[6] = {8, 8, 7, 9, 23, 74};

	if (count < 6)
		return (numbers[count++]);
	return (numbers[5]);
}
