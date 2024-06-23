#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascd. order
 * @list: Double pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node, *temp;

	if (!list || !*list)
		return;

	current = (*list)->next;
	while (current)
	{
		next_node = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			temp = current->prev;
			/* Swap nodes */
			if (current->next)
				current->next->prev = temp;
			temp->next = current->next;
			current->next = temp;
			current->prev = temp->prev;
			temp->prev = current;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;

			print_list(*list);
		}
		current = next_node;
	}
}
