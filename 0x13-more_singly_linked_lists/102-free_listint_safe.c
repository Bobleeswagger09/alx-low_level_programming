/*
 * File: 102-free_listint_safe.c
 * Auth: Gedeon Obae Gekonge
 */

#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *sasuke, *naruto;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	sasuke = head->next;
	naruto = (head->next)->next;

	while (naruto)
	{
		if (sasuke == naruto)
		{
			sasuke = head;
			while (sasuke != naruto)
			{
				nodes++;
				sasuke = sasuke->next;
				naruto = naruto->next;
			}

			sasuke = sasuke->next;
			while (sasuke != naruto)
			{
				nodes++;
				sasuke = sasuke->next;
			}

			return (nodes);
		}

		sasuke = sasuke->next;
		naruto = (naruto->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, i;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
