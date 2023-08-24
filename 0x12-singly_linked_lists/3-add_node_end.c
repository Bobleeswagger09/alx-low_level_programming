#include "lists.h"

/**
* add_node_end - function that add a new node to the end of a list
* @head: pointer to the head of the list
* @str: string to be added
* Return: NULL or adress of element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int len;
	list_t *current_node, *last_node;

	current_node = malloc(sizeof(list_t));
	if (current_node == NULL)
	{
		return (NULL);
	}

	d = strdup(str);
	if (str == NULL)
	{
		free(current_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	current_node->str = d;
	current_node->len = len;
	current_node->next = NULL;

	if (*head == NULL)
		*head = current_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = current_node;
	}
	return (*head);
}
