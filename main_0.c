#include <stdio.h>

void print_list(int *array, size_t size);
void bubble_sort(int *array, size_t size);

int main(void)
{
    int array[] = {79, 47, 68, 87, 84, 91, 21, 32, 34, 2, 95, 31, 20, 22, 98, 39, 92, 41, 62, 1};
    size_t size = sizeof(array) / sizeof(array[0]);

    print_list(array, size); // Print the initial array
    bubble_sort(array, size); // Sort the array

    return 0;
}
