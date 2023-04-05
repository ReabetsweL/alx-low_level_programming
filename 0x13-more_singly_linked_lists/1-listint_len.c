#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * 		in a linked listint_len list.
 * @h: Pointer to the head of the listint_len list.
 *
 * Return: The number of elements in the listint_len list.
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
