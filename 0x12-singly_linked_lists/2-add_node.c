#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *d;
	unsigned int len;
	list_t *ufa;

	ufa = malloc(sizeof(list_t));
	if (ufa == NULL)
	{
		return (NULL);
	}

	d = strdup(str);
	if (d == NULL)
	{
		free(ufa);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}
	ufa->str = d;
	ufa->len = len;
	ufa->next = *head;

	*head = ufa;

	return (ufa);

}
