#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
