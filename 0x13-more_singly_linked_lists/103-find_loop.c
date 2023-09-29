#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - finds address of starting node in looped linked list
 * @head: pointer to the head in linked list to test
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *temp2;

	if (!head)
		return (NULL);

	temp = temp2 = head;

	while (temp2 && temp && temp->next)
	{
		temp2 = temp2->next;
		temp = (temp->next)->next;

		if (temp == temp2)
		{
			temp2 = head;

			while (temp2 && temp)
			{
				if (temp2 == temp)
					return (temp2);

				temp2 = temp2->next;
				temp = temp->next;
			}
		}
	}

	return (NULL);
}
