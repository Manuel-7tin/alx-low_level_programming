#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node of a list at indexn
 *
 * @head: The list to be transversed
 * @index: the index number
 *
 * Return: returnsthe node at the index if found, returns null if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hold_node = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		hold_node = hold_node->next;
		if (hold_node == NULL)
			return (NULL);
	}
	return (hold_node);
}
