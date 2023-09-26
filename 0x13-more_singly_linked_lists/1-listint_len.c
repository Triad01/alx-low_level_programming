#include "lists.h"
/**
* listint_len - returns the number of length of elements in a linked list
* @h: header pointer to the first node
* Return: variable with datatype of size_t
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *traverse_ptr;
	size_t node_count;

	if (h == NULL)
		return (1);
	traverse_ptr = h;
	node_count = 0;

	while (traverse_ptr != NULL)
	{
		node_count++;
		traverse_ptr = traverse_ptr->next;
	}
	return (node_count);
}
