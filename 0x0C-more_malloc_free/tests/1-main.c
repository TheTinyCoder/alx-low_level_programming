#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
    char *concat1 = string_nconcat("Best ", "School", 4);
    char *concat2 = string_nconcat("", "Hello", 12);
    char *concat3 = string_nconcat("Hello", "", 12);
    char *concat4 = string_nconcat("Hello", NULL, 12);
    char *concat5 = string_nconcat(NULL, NULL, 10);

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    printf("%s\n", concat1);
    printf("%s\n", concat2);
    printf("%s\n", concat3);
    printf("%s\n", concat4);
    printf("%s\n", concat5);
    free(concat);
    free(concat1);
    free(concat2);
    free(concat3);
    free(concat4);
    free(concat5);
    return (0);
}
