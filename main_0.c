#include "sort.h"
#include <stdlib.h>

/**
 * main - Entry point for testing the bubble_sort function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	bubble_sort(array, n);
	print_array(array, n);

	return (0);
}
