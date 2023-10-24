#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t track;
	size_t sorter = 0;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (track = 0; track < size; track++)
		{
			if (array[track] > array[track + 1] && array[track + 1])
			{
				sorter = array[track];
				array[track + 1] = array[track];
				array[track + 1] = sorter;
				print_array(array, size);
			}
		}
	}
}
