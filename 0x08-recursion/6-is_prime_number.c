#include "main.h"
#include <stdio.h>
int prime_num(int num, int prime);
/**
 * is_prime_number - return factorial of a number
 * @n: the character to print
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, 2));

}

/**
 * prime_num  - return square root
 * @num: the character to print
 * @prime: the character to print
 *
 * Return: Always 0.
 */
int prime_num(int num, int prime)
{
	if (num == prime)
		return (1);
	else if (num % prime == 0)
		return (0);
	return (prime_num(num, prime + 1));
}
