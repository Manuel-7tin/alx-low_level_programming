#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in the list at a given index
 *
 * @head: The list to be deleted
 * @index: the index to be deleted
 *
 * Return: (int) 1 if it succedds and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node, *hold_node = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp_node = hold_node->next;
		free(hold_node);
		*head = temp_node;
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		if (hold_node->next == NULL)
			return (-1);
		hold_node = hold_node->next;
	}
	temp_node = hold_node->next->next;
	free(hold_node->next);
	hold_node->next = temp_node;
	return (1);
}
