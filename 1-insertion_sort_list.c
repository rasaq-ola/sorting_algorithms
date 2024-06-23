#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @node1: Pointer to the first node
 * @node2: Pointer to the second node
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
    if (node1->prev)
        node1->prev->next = node2;
    else
        *list = node2;
    if (node2->next)
        node2->next->prev = node1;

    node1->next = node2->next;
    node2->prev = node1->prev;
    node1->prev = node2;
    node2->next = node1;
}

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order using Insertion sort
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next, *temp;

    if (!list || !*list)
        return;

    current = (*list)->next;
    while (current)
    {
        next = current->next;
        while (current->prev && current->prev->n > current->n)
        {
            temp = current->prev;
            swap_nodes(list, temp, current);
            print_list(*list);
        }
        current = next;
    }
}
