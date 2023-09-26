#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: head pointer to the first node of the listint_t list
* @index: the node index to be returned
* Return: variable with datatype listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node_ptr;
	unsigned int count;

	count = 0;

	current_node_ptr = head;

	while (current_node_ptr != NULL)
	{
		if (count == index)
		{
			return (current_node_ptr);
		}
		current_node_ptr = current_node_ptr->next;
		count++;
	}
	return (NULL);
}
