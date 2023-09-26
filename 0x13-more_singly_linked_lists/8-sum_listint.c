#include "lists.h"
/**
* sum_listint - returns the sum of all the data in a listint_t linked list
* @head: pointer to the first node in the linked list
* Return: an integer variable
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *traverse_ptr;

	sum = 0;

	if (head == NULL)
		return (0);

	traverse_ptr = head;

	while (traverse_ptr != NULL)
	{
		sum += traverse_ptr->n;
		traverse_ptr = traverse_ptr->next;
	}
	return (sum);
}
