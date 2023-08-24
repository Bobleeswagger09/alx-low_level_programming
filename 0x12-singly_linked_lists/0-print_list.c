#include "lists.h"
#include <stdio.h>

/**
* print_list - a function that prints all the elements of a list_t list.
* @h: is a pointer to lis_t
* Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *curr_element = h;
	size_t c = 0;

	while (curr_element != NULL)
	{
		if (curr_element->str != NULL)
		{
			printf("[%d] %s\n", curr_element->len, curr_element->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		c += 1;
		curr_element = curr_element->next;
		}
		return (c);
}
