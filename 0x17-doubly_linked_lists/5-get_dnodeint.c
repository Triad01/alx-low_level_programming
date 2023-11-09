#include "lists.h"
/**
* get_dnodeint_at_index - gets a node at a particular index
* @head: pointer to the first node in the list
* @index: index of the node of interest
* Return: pointer to the address of the node gotten
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t *current_node;

	current_node = head;

	i = 0;

	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	return (current_node);
}
