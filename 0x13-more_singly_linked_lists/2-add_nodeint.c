#include "lists.h"
/**
* add_nodeint - adds a node at the beginning of a listint_t int
* @head: head pointer to the first node in the list
* @n: data of the new node to be added
* Return: variable of datatype listint_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
