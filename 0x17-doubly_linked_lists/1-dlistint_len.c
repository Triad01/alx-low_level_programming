#include "lists.h"
/**
* dlistint_len - calculates the number of elements in a doubly linked list
* @h: head pointer to the first node
* Return: always an unsigned int
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *traverse_ptr = h;

	int counter;

	counter = 0;

	while (traverse_ptr != NULL)
	{
		counter++;
		traverse_ptr = traverse_ptr->next;
	}
	return (counter);
}
