#include "lists.h"

/**
 * sum_listint - SUms up all the integers in a list
 *
 * @head: The list to be transversed
 *
 * Return: (int)The sum of the integers
 */

int sum_listint(listint_t *head)
{
	listint_t *hold_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (hold_node != NULL)
	{
		sum += hold_node->n;
		hold_node = hold_node->next;
	}
	return (sum);
}
