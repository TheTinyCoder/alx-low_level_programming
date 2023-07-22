#include "../main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a = "hello, world";
    char *b = "world";
    char *c;
    char *d = "First, solve the problem. Then, write the code.";
    char *e = "solve";
    char *f;
    char *g = "First, solve the problem. Then, write the code.";
    char *h = "";
    char *i;

    c = _strstr(a, b);
    printf("%s\n", (c == NULL ? "nil" : c));

    f = _strstr(d, e);
    printf("%s\n", (f == NULL ? "nil" : f));

    i = _strstr(g, h);
    printf("%s\n", (i == NULL ? "nil" : i));
    return (0);
}
