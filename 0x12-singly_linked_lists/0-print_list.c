#include "lists.h"
#include <stdio.h>

/**
* print_list - a function that prints all the elements of a list_t list.
* @h: is a pointer to lis_t
* Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *cur_node = h;
	size_t c = 0;

	while (cur_node != NULL)
	{
		if (cur_node->str != NULL)
			printf("[%u] %s\n", cur_node->len, cur_node->str);
		else
			printf("[0] (nil)\n");
		c += 1;
		cur_node = cur_node->next;
	}
	return (c);
}
