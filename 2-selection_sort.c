#include "sort.h"
/**
 * insertion_sort_list - sorts the provided list in ascending
 * order using insertion sort
 *
 * @list: a pointer to a pointer to the head
 */
void insertion_sort_list(listint_t **list);
void insertion_sort_list(listint_t **list)
{
	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}

	listint_t *sorted = NULL;
	listint_t *current = *list;

	while (current != NULL)
	{
		listint_t *nextNode = current->next;

		if (sorted == NULL || sorted->data >= current->data)
		{
			current->next = sorted;
			current->prev = NULL;

			if (sorted != NULL)
			{
				sorted->prev = current;
			}

			sorted = current;
		} else
		{
			listint_t *search = sorted;

			while (search->next != NULL && search->next->data < current->data)
			{
				search = search->next;
			}

			if (search->next != NULL)
			{
				search->next->prev = current;
			}

			current->prev = search;
			current->next = search->next;
			search->next = current;
		}

		current = nextNode;
	}

	*list = sorted;
}
