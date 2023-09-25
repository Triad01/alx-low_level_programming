#include "lists.h"
/**
* add_nodeint_end - adds new node at the end of a listint_t int
* @head: Header to pointer of the first node
* @n: data of the new node to be added
* Return: variable of the listint_t datatype
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *traverse_ptr;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		traverse_ptr = *head;
		while (traverse_ptr->next != NULL)
		{
			traverse_ptr = traverse_ptr->next;
		}
		traverse_ptr->next = newnode;
	}
	return (*head);
}
