#include "lists.h"

/**
 *free_list - a function that frees a list_t list.
 *@head: A pointer to the HEAD of the LIST
 *
 */

void free_list(list_t *head)
{
	list_t *tmp_v;

	while (head)
	{
		tmp_v = head->next;
		free(head->str);
		free(head);
		head = tmp_v;
	}
}
