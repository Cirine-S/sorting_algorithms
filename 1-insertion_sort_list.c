#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sort insertion function
 *
 * @list: double pointer to the list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL, *tmp = *list, *head = (*list)->next;

	if (!*list)
		return;

	while (head)
	{
		curr = head;
		while (curr->prev)
		{
			tmp = curr->prev;
			if (tmp->n > curr->n)
			{
				if (tmp->prev)
					tmp->prev->next = curr;
				else
					*list = curr;

				if (curr->next)
					curr->next->prev = tmp;

				tmp->next  = curr->next;
				curr->prev = tmp->prev;

				curr->next = tmp;
				tmp->prev = curr;
				print_list(*list);
				continue;
			}
			curr = curr->prev;
		}
		head = head->next;
	}
}
