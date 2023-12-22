#include "sort.h"
/**
 * selection_sort - sort integer array (ascending order) with selection sort
 * @array: pointer to array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int  temp;

	if (array == NULL || size < 2)
		return;

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
		if (min != i)
		{	
	/*swap min integer to current available position*/
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}

}
