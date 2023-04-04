#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node to list at a given index
 *
 * @head: The list to be transversed
 * @idx: The index
 * @n: The integer to be added to the string
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned long idx, int n)
{
	listint_t  *hold_node = *head;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		hold_node = hold_node->next;
		if (hold_node == NULL)
			return (NULL);
	}
	hold_node->n = n;
	return (hold_node);
}
