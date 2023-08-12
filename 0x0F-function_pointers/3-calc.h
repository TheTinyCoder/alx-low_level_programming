#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#undef NULL
#define NULL ((void *) 0)
/* op_add: returns the sum of a and b. */
int op_add(int a, int b);
/* op_sub: returns the difference of a and b. */
int op_sub(int a, int b);
/* op_mul: returns the product of a and b. */
int op_mul(int a, int b);
/* op_div: returns the result of the division of a by b. */
int op_div(int a, int b);
/* op_mod: returns the remainder of the division of a by b. */
int op_mod(int a, int b);
/* get_op_func: returns a pointer to function that corresponds to op in char*/
int (*get_op_func(char *s))(int, int);
#endif
