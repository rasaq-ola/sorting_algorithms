#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_node - Creates a new node
 * @n: Value to store in the new node
 * Return: Address of the new node, or NULL on failure
 */
listint_t *create_node(const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascd. order
 * @list: Double pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current;

	if (!list || !*list || !(*list)->next)
		return;

	temp = *list;
	while (temp->next)
	{
		current = temp->next;
		while (current && current->prev && current->n < current->prev->n)
		{
			if (current->next)
				current->next->prev = current->prev;
			current->prev->next = current->next;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
			print_list(*list);
		}
		temp = temp->next;
	}
}
