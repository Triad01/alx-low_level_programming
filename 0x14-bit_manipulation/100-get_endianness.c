#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: pointer
 */

int get_endianness(void)
{
	unsigned int i;
	char *ptr;

	i = 1;

	ptr = (char *) &i;

	return (*ptr);
}
