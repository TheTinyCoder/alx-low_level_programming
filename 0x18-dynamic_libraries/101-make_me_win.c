#include <stdlib.h>

int rand()
{
	static int runs = -1;

	runs++;
	if (runs == 0)
		return 9;
	if (runs == 1)
		return 8;
	if (runs == 2)
		return 10;
	if (runs == 3)
		return 24;
	if (runs == 4)
		return 75;
	if (runs == 5)
		return 9;
	return runs * runs % 32768;
}
