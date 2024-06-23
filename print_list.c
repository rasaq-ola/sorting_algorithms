#include <stdio.h>

void print_list(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}
