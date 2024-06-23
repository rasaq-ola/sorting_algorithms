#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next, *temp;

    if (!list || !(*list) || !(*list)->next)
        return;

    current = (*list)->next;

    while (current)
    {
        next = current->next;
        while (current->prev && current->n < current->prev->n)
        {
            temp = current->prev;

            if (temp->prev)
                temp->prev->next = current;
            current->prev = temp->prev;

            temp->prev = current;
            temp->next = current->next;

            if (current->next)
                current->next->prev = temp;

            current->next = temp;

            if (!current->prev)
                *list = current;

            print_list(*list);
        }
        current = next;
    }
}
