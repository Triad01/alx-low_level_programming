#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node_ptr, *next_node_ptr;

	if (head == NULL)
		return;

	current_node_ptr = *head;

	while (current_node_ptr != NULL)
	{
		next_node_ptr = current_node_ptr->next;
		free(current_node_ptr);
		current_node_ptr = next_node_ptr;
	}

	*head = NULL;
}
