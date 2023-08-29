#include "lists.h"
#include <stdio.h>

/**
* print_list - a function that prints all the elements of a list_t list.
* @h: is a pointer to lis_t
* Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
		node++;

	}
	return (node);
}
