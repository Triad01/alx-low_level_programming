#include "main.h"

/**
* sqrt_helper - helper function for square root calculation
* @n: the number for which to calculate the square root
* @guess: current guess for the square root
*
* Return: the square root of n or -1 if not found
*/
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number for which to calculate the square root
 *
 * Return: the square root of n or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_helper(n, 0));
}
