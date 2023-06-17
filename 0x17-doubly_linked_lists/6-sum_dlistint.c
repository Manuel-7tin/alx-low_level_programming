#include "lists.h"

/**
 * sum_dlistint - add data 
 *
 * @head: point to the first 
 *
 * Return: jasjanoaT
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
