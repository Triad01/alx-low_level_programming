#include "lists.h"
/**
* add_dnodeint_end - adds a node at the end of a doubly linked list
* @head: pointer to the first node in the list
* @n: data of the new node to be added
* Return: an address of the new node added (a pointer of type dlistint_t)
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *traverse_ptr;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		traverse_ptr = *head;

		while (traverse_ptr->next != NULL)
		{
			traverse_ptr = traverse_ptr->next;
		}

		traverse_ptr->next = new_node;
		new_node->prev = traverse_ptr;
	}

	return (*head);
}
