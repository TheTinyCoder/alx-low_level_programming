#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#undef NULL
#define NULL ((void *) 0)
void print_name(char *name, void (*f)(char *));
#endif


