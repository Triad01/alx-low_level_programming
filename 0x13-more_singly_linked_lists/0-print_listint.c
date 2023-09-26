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
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
