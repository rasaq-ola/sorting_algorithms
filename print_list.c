#include <stddef.h>
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a doubly linked list of integers
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
    int sep = 0;

    while (list)
    {
        if (sep)
            printf(", ");
        printf("%d", list->n);
        sep = 1;
        list = list->next;
    }
    printf("\n");
}
