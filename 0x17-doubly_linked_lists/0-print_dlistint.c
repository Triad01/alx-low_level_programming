#include "lists.h"
/**
* print_dlistint - prints the number of nodes
* @h: head pointer
* Return: an unsigned int of the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *traverse_ptr = h;

	int count = 0;

	while (traverse_ptr != NULL)
	{
		printf("%d\n", traverse_ptr->n);
		count++;
		traverse_ptr = traverse_ptr->next;
	}

	return (count);
}
