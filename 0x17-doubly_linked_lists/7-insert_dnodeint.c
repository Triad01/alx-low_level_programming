#include "lists.h"
/**
* insert_dnodeint_at_index - inserts node at a given index position
* @idx: index position
* @n: data of the new node to be inserted
* @h: header to the first node of the list
* Return: pointer to the address of the insered node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_ptr;

	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}

		*h = new_node;

		return (new_node);
	}
	current_ptr = *h;

	for (i = 0; i < idx && current_ptr != NULL; i++)
	{
		current_ptr = current_ptr->next;
	}

	if (current_ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_ptr->next;
	new_node->prev = current_ptr;

	if (current_ptr->next != NULL)
	{
		current_ptr->next->prev = new_node;
		current_ptr->next = new_node;
	}

	return (new_node);
}
