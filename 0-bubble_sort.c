#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble Sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n = size;
	int tmp, new_n;

	while (n > 1)
	{
		new_n = 0;
		for (i = 1; i <= n - 1; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				new_n = i;
			}
		}
		n = new_n;
	}
}
