#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer variable
 * @index: index of number starting from 0
 * Return: always an integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	i = index;

	if (i > 63)
		return (-1);

	*n = ((1UL << i) | *n);
	return (1);
}
