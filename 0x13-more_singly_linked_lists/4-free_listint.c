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
	listint_t *hold_node;

	while (head != NULL)
	{
		hold_node = head->next;
		free(head);
		head = hold_node;
	}
}
