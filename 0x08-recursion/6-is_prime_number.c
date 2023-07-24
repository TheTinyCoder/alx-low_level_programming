#include "main.h"

/**
 * is_prime_recursion - function entry-point
 *
 * Description: 'divides n by increasing num to check if prime'
 * @n: integer
 * @num: integer
 * Return: 0 or 1
 */

int is_prime_recursion(int n, int num)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (num == n)
		return (1);
	if (n % num == 0)
		return (0);
	num++;
	return (is_prime_recursion(n, num));
}

/**
 * is_prime_number -  function entry-point
 *
 * Description: 'checks if n is a prime number'
 * @n: integer
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int num;

	num = 2;
	return (is_prime_recursion(n, num));
}
