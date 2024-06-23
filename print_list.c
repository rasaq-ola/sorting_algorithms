#include <stdio.h>
#include "sort.h"

void print_list(const listint_t *list)
{
	while (list)
	{
		printf("%d", list->n);
		if (list->next)
			printf(", ");
		list = list->next;
	}
	printf("\n");
}
