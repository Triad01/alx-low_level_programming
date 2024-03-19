#include "search_algos.h"
/**
* linear_search - searches for a value in an array using linear searc algorithm
* @array: Pointer to the first element in the array to be searched
* @size: number of elements in the array
* @value: the value to be searched for
* Return: the index where value is found, always an integer
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
