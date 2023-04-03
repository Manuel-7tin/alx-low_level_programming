#include "lists.h"

/**
 * add_nodeint - Adds a node to an inputted list
 *
 * @head: A pointer to the list
 * @n: AN element in the node to be added
 *
 * Return:the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
