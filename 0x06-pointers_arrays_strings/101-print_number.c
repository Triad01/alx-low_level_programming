#include "main.h"

/**
* print_number - Prints an integer
* @n: The integer to be printed
*/
void print_number(int n)
{

	int i, divisor, numDigits, temp;

	temp = n;
	numDigits = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}

	divisor = 1;

	for (i = 1; i < numDigits; i++)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
