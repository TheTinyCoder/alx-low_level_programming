#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: prints 'Hello, Holberton' followed by a new line
 * Note: compile with below steps
 * 1. gcc -fno-asynchronous-unwind-tables -s -c -o hello.o hello.c
 * 2. objconv -fnasm hello.o
 * End of Note: the above steps create hello.asm
 * No parameters hence void
 * Return: Always 0.
 */
int main(void)
{
	printf("Hello, Holberton\n");
}
