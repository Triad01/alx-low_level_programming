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
	int node_count = 0;
	const listint_t *traverse_ptr;

	if (h == NULL)
		return (1);
	traverse_ptr = h;

	while (traverse_ptr != NULL)
	{
		printf("%d\n", traverse_ptr->n);
		node_count++;
		traverse_ptr = traverse_ptr->next;
	}
	return (node_count);
}
