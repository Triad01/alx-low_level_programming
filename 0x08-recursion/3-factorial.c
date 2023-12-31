#include "main.h"
/**
* factorial - prints the factorial of a given number
* @n: argument
* Return: always 0 (successful)
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
