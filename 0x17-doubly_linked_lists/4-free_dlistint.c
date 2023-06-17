#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - to free DL
 *
 * @head: first node or head node
 *
 * Return NULL
 */

void free_dlistint(dlistint_t *head)
{
        dlistint_t *tempr;

        while (head != NULL)
        {
                tempr = head;
                head = head->next;
                free(tempr);
        }
}
