#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		if (i == index - 1)
		{
			dlistint_t *node_to_delete = current->next;

			if (node_to_delete == NULL)
				return (-1);
			current->next = node_to_delete->next;
			if (node_to_delete->next != NULL)
				node_to_delete->next->prev = current;
			free(node_to_delete);
			return (1);
		}
		current = current->next;
	}

	return (-1);
}
