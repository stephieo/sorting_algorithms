#include "sort.h"

/**
 * bubble_sort - sort array of integers in ascending order using bubble sort
 * @array: pointer to integer array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag;

	if (array == NULL || size < 2)
		return;

	/*loop form  0 to size - 2*/
	for (i = 0 ; i <= (size - 2); i++)
	{
		flag = 0;
		/* loop from 0 to size -2*/
		for (j = 0; j <= (size - i - 2); j++)
		{
			if (array[j] > array[j + 1])
			{
		/* swap if current is greater*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;

	}

}

