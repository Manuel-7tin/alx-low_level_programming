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
	listint_t *new_node, *hold_node = *head;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		hold_node = hold_node->next;
		if (hold_node == NULL)
			return (NULL);
	}
	if (hold_node == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
