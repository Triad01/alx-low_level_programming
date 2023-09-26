#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - list the elements in the node
 * @h: header pointer to the first node
 * Return: integer whose data type is size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int len = 0;

	temp = h;
	if (temp == NULL)
		return ((size_t)(NULL));

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		len++;
	}

	return (len);
}
