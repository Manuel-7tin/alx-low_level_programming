#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a list
 *
 * @head: The list to be appended
 * @n: the element of the new list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_node, *hold_node;

	if (head == NULL)
		return (NULL);
	temp_node = malloc(sizeof(listint_t));
	if (temp_node == NULL)
	{
		return (NULL);
	}
	temp_node->n = n;
	temp_node->next = NULL;
	if (*head == NULL)
	{
		*head = temp_node;
		return (*head);
	}
	hold_node = *head;
	while (hold_node->next != NULL)
		hold_node = hold_node->next;
	hold_node->next = temp_node;
	return (hold_node);
}
