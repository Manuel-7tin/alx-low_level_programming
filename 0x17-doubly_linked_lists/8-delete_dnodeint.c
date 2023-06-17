#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a index
 *
 * @head: a double pointer to the first node
 *
 * @index: index locate ot del node
 *
 * Return if succesful, 1, else 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			(current->next)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	temp = current;
	(current->prev)->next = current->next;
	if (current->next != NULL)
		(current->next)->prev = current->prev;
	free(temp);

	return (1);
}
