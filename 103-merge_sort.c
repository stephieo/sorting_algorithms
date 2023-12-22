#include "sort.h"
/**
 * merge_sort - sorts an integer array in ascending order with merge sort
 * @array: array to be sorted
 * @size: size of the array
 */
void merge_sort(int *array, size_t size)
{
	size_t midpoint = size / 2;
	int left[midpoint], right[size - midpoint];
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	
	for (i = 0; i < midpoint - 1; i++)
		left[i] = array[i];
	
	for (j = midpoint; j < midpoint - 1; j++)
		right[j] = array[j];

	merge_sort(left, midpoint);
	merge_sort(right, size - midpoint);
	merge_halves(array, left, right, midpoint, size - midpoint);

	 
}

/**
 *
 * merge_halves - merges in two  sorted array into one
 * @array: original array to sort
 * @left: left array to merge
 * @right: right array to merge
 * @left_size: size of left  array
 * @right_size: size of right array
 */
void merge_halves(int *array, int *left, int *right, size_t left_size, size_t right_size)
{
	size_t i , j , k;

	i = j = k = 0;

	while (i < left_size && j < right_size)
	{
		if (left[i] < right[j])
		{
			array[k] = left[i];
			i++;
		}
		else 
		{
			array[k] = right[j];
			i++;
		}
		k++;
	}

	while (i < left_size)
	{
		array[k] = left[i];
		i++;
		k++;
	}

	while (j < right_size)
	{
		array[k] = right[j];
		j++;
		k++;
	}

}
