#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: Pointer to the integer array to be sorted
 * @size: The number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	for (i = 0; i < size; i++)
	{
		min = i;
		{
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
					min = j;
			}
			if (min != i)
			{
				temp = array[i];
				array[i] = array[min];
				array[min] = temp;
				print_array(array, size);
			}
		}
	}
}
