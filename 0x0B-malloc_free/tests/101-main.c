#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    int i, j, k;
    char **tab;
    char **tab1;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    tab1 = strtow("Talk is cheap. Show me the code.");
    if (tab1 == NULL)
    {
	    printf("Failed\n");
	    return (1);
    }
    print_tab(tab);
    i = word_count("      ALX School         #cisfun      ");
    for (k = 0; k < i; k++)
	    free(tab[k]);
    free(tab);
    print_tab(tab1);
    j = word_count("Talk is cheap. Show me the code.");
    for (k = 0; k < j; k++)
	    free(tab1[k]);
    free(tab1);
    return (0);
}
