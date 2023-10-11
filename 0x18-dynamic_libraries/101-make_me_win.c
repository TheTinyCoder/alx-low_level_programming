#include <stdlib.h>

int rand()
{
	static int count = -1;
	int numbers[6] = {9, 8, 10, 24, 75, 9};

	if (count < 6)
		return (numbers[count++]);
	return (numbers[4]);
}
