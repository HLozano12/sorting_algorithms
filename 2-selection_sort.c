#include "sort.h"
/**
 * swap - swaps two ints per GeeksForGeeks article
 * @x: first int
 * @y: second int
 *
 * Return: void
 */

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * selection_sort - Prototype for Selection Sorting
 * @array: Our Array to be sorting
 * @size: Our Array's size
 *
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int h, l, indx;

	if (array == NULL)
		return;

	for (h = 0; h < (size - 1) && size >= 2; h++)
	{
		indx = h;
		for (l = h + 1; l < size; l++)
		{
			if (array[l] < array[indx])
			{
				indx = l;
			}
		}
		if (indx != h)
		{
			swap(&array[h], &array[indx]);
			print_array(array, size);
		}
	}
}
