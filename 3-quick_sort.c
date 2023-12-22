#include "sort.h"

/**
 * swap - swaps two int values
 * @array: array to be sorted
 * @size: size of the array
 * @a: the address of the first value
 * @b: address of the second value
 *
 * Return: nothing or void
 */
void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_pertition - partitions the array
 * @array: the array to be sorted
 * @size: the size of the array to be sorted
 * @lo: low index 
 * @hi: high index
 *
 * Return: size_t
 */
size_t lomuto_partition(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	int i, j, pivot = array[hi];

	for (i = j = lo; j < hi; j++)
		if (array[j] < pivot)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[hi]);

	return (i);
}

/**
 * quicksort - uses lomuto partitioning scheme for quicksort
 * @array: the array to be sorted
 * @size: size of the array
 * @lo: low index
 * @hi: high index
 *
 * Return: nothing or void
 */
void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	if (lo < hi)
	{
		size_t p = lomuto_partition(array, size, lo, hi);

		quicksort(array, size, lo, p - 1);
		quicksort(array, size, p + 1, hi);
	}
}

/**
 * quick_sort - calls the quicksort function
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}
