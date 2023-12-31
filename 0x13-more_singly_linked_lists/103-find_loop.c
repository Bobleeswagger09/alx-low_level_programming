/*
 * File: 103-find_loop.c
 * Auth: Gedeon Obae Gekonge
 */

#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *naruto, *sasuke;

	if (head == NULL || head->next == NULL)
		return (NULL);

	naruto = head->next;
	sasuke = (head->next)->next;

	while (sasuke)
	{
		if (naruto == sasuke)
		{
			naruto = head;

			while (naruto != sasuke)
			{
				naruto = naruto->next;
				sasuke = sasuke->next;
			}

			return (naruto);
		}

		naruto = naruto->next;
		sasuke = (sasuke->next)->next;
	}

	return (NULL);
}
