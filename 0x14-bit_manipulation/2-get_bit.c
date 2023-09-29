#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number of int
 * @index: index
 * Return: bit as integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_returned;

	if (index > 63)
		return (-1);

	bit_returned = (n >> index) & 1;

	return (bit_returned);
}
