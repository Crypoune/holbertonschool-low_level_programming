#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_dlistint;

	while (head)
	{
		free_dlistint = head;
		head = head->next;
		free(free_dlistint);
	}
}
