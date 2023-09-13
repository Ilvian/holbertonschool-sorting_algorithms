#include <stdio.h>
#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list->next);

	while(current != NULL)
	{
		listint_t *insert = current;
		while(insert->prev) != NULL && insert->n < insert->prev->n)
		{
			listint_t *prev_node = insert->prev;
			listint_t *prev_prev_node = prev_node->prev;
			listint_t *next_node = insert->next;

			prev_node->next = next_node;
			if(next_node != NULL)
				next_node->prev = prev_node;

			insert->prev = prev_prev_node;
			if(prev_prev_node != NULL)
				prev_prev_node->next = insert;
			else *list = insert;

			insert->next = prev_node;
			prev_node->prev = insert;
		}
		current = current->next;
	}
}
