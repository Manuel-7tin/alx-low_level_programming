#include "lists.h"

/**
 * print_dlistint - prints all int in a doubly linked list
 *
 * @h: The doubly linked
 *
 * Return: int -- Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;	
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
