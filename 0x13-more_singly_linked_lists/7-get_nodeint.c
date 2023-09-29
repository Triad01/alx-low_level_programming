#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: head pointer to the first node of the listint_t list
* @index: the node index to be returned
* Return: variable with datatype listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse_ptr;
	unsigned int node_count;

	node_count = 0;

	traverse_ptr = head;

	while (traverse_ptr != NULL)
	{
		if (node_count == index)
		{
			return (traverse_ptr);
		}
		traverse_ptr = traverse_ptr->next;
		node_count++;
	}
	return (NULL);
}
