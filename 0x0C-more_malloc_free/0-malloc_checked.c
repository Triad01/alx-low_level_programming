#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc
* @b: argument
* Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *) malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
