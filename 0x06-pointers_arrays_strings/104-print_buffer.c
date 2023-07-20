#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer -  function entry-point
 *
 * Description: 'print the content of size bytes of the buffer pointed by b'
 * @b: buffer to print
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int m, n, p;

	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0;  m < size; m += 10)
		{
			printf("%08x: ", m);
			for (n = m; n < m + 10; n += 2)
			{
				if (n >= size)
					printf("    ");
				else
					printf("%02x%02x ", b[n], b[n + 1]);
			}
			for (p = m; p < m + 10; p++)
			{
				if (p >= size)
					printf(" ");
				else
				{
					if (isprint(b[p]) != 0)
						printf("%c", b[p]);
					else
						printf(".");
				}
			}
			printf("\n");
		}
	}
}
