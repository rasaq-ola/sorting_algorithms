#include <stddef.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @array: Array to be printed
 * @size: Number of elements in the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    if (!array)
        return;

    for (i = 0; i < size; i++)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}
