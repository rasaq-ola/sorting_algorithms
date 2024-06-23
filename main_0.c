#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/* Function prototypes for creating and printing the list */
listint_t *create_listint(const int *array, size_t size);
void print_array(const int *array, size_t size);

int main(void)
{
	/* Example to test bubble_sort */
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	printf("Unsorted array:\n");
	print_array(array, n);
	bubble_sort(array, n);
