#include "lists.h"

/**
 * free_listint - a function frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp_node;
	}
}
