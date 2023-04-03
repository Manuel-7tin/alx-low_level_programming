#include "lists.h"

/**
 * print_listint - Prints  all the elements of a listint_t list.
 *
 * @h: pointer to the first element of the list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;
	const listint_t *ptrs;

	ptrs = h;
	while (ptrs != NULL)
	{
		printf("%i\n", ptrs->n);
		n++;
		ptrs = ptrs->next;
	}
	return (n);
}
