#include "sort.h"

/**
 * insertion_sort_list - implements insertion sort algorithm
 * @list: A pointer to the head of the list to be sorted
 *
 * Return: No return value.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *key;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (curr = (*list)->next; curr != NULL; curr = curr->next)
	{
		key = curr;
		while (key->prev != NULL && key->n < key->prev->n)
		{
			if (key->next != NULL)
				key->next->prev = key->prev;
			key->prev->next = key->next;
			key->next = key->prev;
			key->prev = key->prev->prev;
			key->next->prev = key;

			if (key->prev == NULL)
				*list = key;
			else
				key->prev->next = key;

			print_list(*list);
		}
	}
}
