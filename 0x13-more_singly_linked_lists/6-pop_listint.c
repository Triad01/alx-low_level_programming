#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - removes the head node of a listint_t linked list
* @head: pointer to the first node in the linked list
* Return: the head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp_ptr;
	int head_data;

	head_data = 0;

	if (*head == NULL || head == NULL)
		return (0);

	temp_ptr = *head;

	head_data = temp_ptr->n;

	*head = (*head)->next;

	free(temp_ptr);

	return (head_data);
}
