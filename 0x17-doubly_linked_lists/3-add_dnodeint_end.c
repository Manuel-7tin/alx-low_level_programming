#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds to new node to D
 *
 *
 * @head: a double pointehe head node
 *
 * @n: Appending vfig
 *
 * Return: Location of the new node , NUll on fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tenp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	tenp = *head;
	while (tenp->next != NULL)
		tenp = tenp->next;

	tenp->next = new_node;
	new_node->prev = tenp;

	return (new_node);
}
