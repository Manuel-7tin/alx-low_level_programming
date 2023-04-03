#include "lists.h"

/**
 * listint_len - Checks the amount of elements in a list
 *
 * @h: The list to be checked
 *
 * Return: (int) TGhe number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;
	const listint_t *ptrs;

	ptrs = h;
	while (ptrs != NULL)
	{
		n++;
		ptrs = ptrs->next;
	}
	return (n);
}
