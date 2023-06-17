#include "lists.h"

/**
 * get_dnodeint_at_index - search for a certain node in DLL
 *
 * @head: point to the first node
 *
 * @index: index of the node when finally found
 *
 * Return: pointer to the search node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	if (head == NULL && count == index)
		return (head);

	return (NULL);
}
