#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array
* @nmemb: first argument
* @size: second argument
* Return: a pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(size, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
