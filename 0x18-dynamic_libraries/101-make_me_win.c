#include <stdlib.h>

int rand()
{
	static int count = -1;
	int numbers[6] = {8, 5, 70, 47, 65, 8};

	if (count < 6)
		return (numbers[count++]);
	return (numbers[4]);
}
