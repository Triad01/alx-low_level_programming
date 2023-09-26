#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - list the elements in the node
 * @h: header pointer to the first node
 * Return: integer whose data type is size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *traverse_ptr;
	size_t node_count;

	node_count = 0;

	traverse_ptr = h;

	if (traverse_ptr == NULL)
		return ((size_t)(NULL));

	while (traverse_ptr != NULL)
	{
		printf("%d\n", traverse_ptr->n);
		traverse_ptr = traverse_ptr->next;
		node_count++;
	}

	return (node_count);
}
