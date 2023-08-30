#include "main.h"

/**
 * is_prime_helper - helper function for prime number checking
 * @num: the number to check for primality
 * @div: current divisor to check divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int num, int div)
{
	if (div == 1)
	{
		return (1);
	}

	if (num % div == 0)
	{
		return (0);
	}
	return (is_prime_helper(num, div - 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the input number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}

