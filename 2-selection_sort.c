#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, tracker;
	int tmp, swp, f = 0;

	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		tmp = i;
		for (tracker = i + 1; tracker < size; tracker++)
		{
			if (array[tmp] > array[tracker])
			{
				tmp = tracker;
				f += 1;
			}
		}
		swp = array[i];
		array[i] = array[tmp];
		array[tmp] = swp;
		if (f != 0)
		{
			print_array(array, size);
		}
	}
}
