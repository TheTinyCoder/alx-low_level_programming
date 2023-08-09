#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: prints the name of the file it was compiled from
 * No parameters hence void
 * Return: Always 0.
 */
int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}
