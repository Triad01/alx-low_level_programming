#include "lists.h"
/**
* sum_dlistint - calculates the sum of data in a doubly linked list
* @head: pointer to the first node on the doubly linked list
* Return: always an integer
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	dlistint_t *traverse_ptr;

	sum = 0;

	traverse_ptr = head;

	while (traverse_ptr != NULL)
	{
		sum += traverse_ptr->n;

		traverse_ptr = traverse_ptr->next;

	}
	return (sum);
}
