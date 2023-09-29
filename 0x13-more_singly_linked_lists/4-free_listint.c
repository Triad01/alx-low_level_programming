#include "lists.h"
#include <stdlib.h>
/**
* free_listint - frees a listint list
* @head: pointer to the first node
*/
void free_listint(listint_t *head)
{
	listint_t *current_node_ptr, *next_node_ptr;

	current_node_ptr = head;

	while (current_node_ptr != NULL)
	{
		next_node_ptr = current_node_ptr->next;
		free(current_node_ptr);
		current_node_ptr = next_node_ptr;
	}
}
