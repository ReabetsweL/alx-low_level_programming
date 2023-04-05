#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to the first node of the linked list
 *
 * Description: This function prints the string and length of each node
 * in the linked list. If a node's string pointer is NULL, it will print
 * [0] (nil). The function returns the number of nodes in the linked list.
 *
 * Return: The number of nodes in the linked list
 */
ize_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}

	count++;
	h = h->next;
	}
	return (count);
}
