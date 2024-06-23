#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/* Helper function to create a new node */
listint_t *create_node(int n)
{
    listint_t *node = malloc(sizeof(listint_t));
    if (!node)
        return NULL;
    node->n = n;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

/* Helper function to free the list */
void free_list(listint_t *list)
{
    listint_t *temp;

    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }
}

int main(void)
{
    listint_t *list = create_node(19);
    listint_t *node = list;
    int array[] = {48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t i;

    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        node->next = create_node(array[i]);
        if (node->next)
            node->next->prev = node;
        node = node->next;
    }

    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);

    free_list(list);
    return 0;
}
