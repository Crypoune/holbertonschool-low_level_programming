#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: pointer to the head of the list
 * Description: This function frees all nodes in a singly linked list
 * and the strings they contain.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node;
	list_t *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
