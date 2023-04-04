#include "lists.h"

/**
 * pop_listint - Deletes the first nodeof an inputted list
 *
 * @head: The list to be popped
 *
 * Return: The value of the data in the popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *hold_node;
	int n;

	if (head == NULL)
		return (0);
	hold_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	(*head) = hold_node;
	return (n);
}
