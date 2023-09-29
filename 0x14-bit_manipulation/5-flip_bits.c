#include "main.h"

/**
 * flip_bits - returns number of bits to be flipped
 * @n: first number
 * @m: second number
 * Return: always an integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter, next_number = 0;
	unsigned long int nit, pre = n ^ m;

	for (counter = 63; counter >= 0; counter--)
	{
		nit = pre >> counter;
		if (nit & 1)
			next_number++;
	}
	return (next_number);
}
