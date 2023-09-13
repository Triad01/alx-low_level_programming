#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - iterates array
* @array: array to be iterated
* @size: size of array
* @action: void pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
