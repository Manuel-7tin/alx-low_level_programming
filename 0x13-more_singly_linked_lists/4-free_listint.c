#include "lists.h"

/**
 * free_listint - Frees memory occcupied by a list
 *
 * @head: The list to be freed
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *hold_node, *temp_node;

	if (head == NULL)
		return ;
	hold_node = head;
	while (hold_node->next != NULL)
	{
		temp_node = hold_node->next;
		free(hold_node);
		hold_node = temp_node;
	}
}
