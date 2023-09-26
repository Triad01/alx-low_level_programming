#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the first node in the list
 * @idx: index position of the new node to be added
 * @n: data of the new node to be added
 * Return: pointer to the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *traverse_ptr, *prev_node = NULL;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	traverse_ptr = *head;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (traverse_ptr != NULL && i < idx)
	{
		prev_node = traverse_ptr;
		traverse_ptr = traverse_ptr->next;
		i++;
	}

	if (i < idx)
	{
		free(newnode);
		return (NULL);
	}

	prev_node->next = newnode;
	newnode->next = traverse_ptr;

	return (newnode);
}

