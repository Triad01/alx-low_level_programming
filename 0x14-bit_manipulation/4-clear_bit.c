#include "main.h"

/**
 * clear_bit - sets value of a bit to zero at a given index
 * @n: number
 * @index:  index to start clearing
 * Return: always an integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;

	i = index;

	if (i > 63)
		return (-1);

	*n = (~(1UL << i) & *n);
	return (1);
}
