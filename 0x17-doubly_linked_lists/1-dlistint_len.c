#include "lists.h"

/**
 * dlistint_len - Calculates the number of elements in a doubly liked list
 *
 * @h: first node of the linked list
 *
 * Return: size_t, num of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		elem_num++;
		h = h->next;
	}
	return (elem_num);
}
