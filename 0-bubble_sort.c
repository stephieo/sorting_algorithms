#include "sort.h"
/**
 * bubble_sort - sort array of integers in ascending order using bubble sort
 * @array: pointer to integer array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;
	/*loop form  0 to size - 2*/
	for (i = 0 ; i < (size - 2); i++)
	{
		/* loop from 0 to size -2*/
		for (j = 0; j < (size - 2); i++)
		{
		/* compare values*/
			if array[j] > array[j + 1]
			{
		/* swap if current is greater*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}

	}

}

