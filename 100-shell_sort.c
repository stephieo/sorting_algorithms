#include "sort.h"

/**
 * get_max_interval - gets the largest knuth sequence gap
 * @size: the size of the array
 *
 * Return: the gap size
 */
size_t get_max_interval(size_t size)
{
	size_t n;

	n = 1;
	while (n < size)
		n = n * 3 + 1;
	return ((n - 1) / 3);
}

/**
 * shell_sort - sorting using shell sort
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, i, j;
	int temp;

	if (!array || !size)
		return;

	for (interval = get_max_interval(size); interval;
	     interval = (interval - 1) / 3)
	{
		for (i = interval; i < size; i++)
		{
			temp = array[i];
			j = i;

			while (j > interval - 1 && array[j - interval] > temp)
			{
				array[j] = array[j - interval];
				j -= interval;
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}
