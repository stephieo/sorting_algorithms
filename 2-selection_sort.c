#include "sort.h"
/**
<<<<<<< HEAD
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
=======
 * selection_sort - sort integer array (ascending order) with selection sort
 * @array: pointer to array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp;

	/*outer loop, keeps track of current available space*/
	for (i = 0; i <= (size - 2); i++)
	{
		min = i;
		/*inner loop,searching for any smaller number*/
		for (j = i + 1; j <= (size - 1); j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
	/*swap min integer to current available position*/
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
>>>>>>> b6c6b77b9e8693f2722557935c27a3b940861698
}
