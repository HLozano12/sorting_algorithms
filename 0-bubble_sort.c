#include "sort.h"

/**
 * bubble_sort - Bubble sorting Prototype
 * @array: int array to be sorted
 * @size: The size of our array
 **/

void bubble_sort(int *array, size_t size)
{
	size_t l, m;
	int pop;

	if (array == NULL || size <= 0)
		return;

	for (l = 0; l < size - 1; l++)
	{
		for (m = 0; m < size - l - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				pop = array[m];
				array[m] = array[m + 1];
				array[m + 1] = pop;
				print_array(array, size);
			}
		}
	}
}
