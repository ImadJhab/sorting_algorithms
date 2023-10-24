#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending
 *  order using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
	{
		return;
	}
	help_quicksort(array, 0, size - 1, size);
}
/**
 * help_quicksort - quick_sort function helper
 * @array: array to be sorted
 * @down: lower index
 * @up: higher index
 * @ln: size of the array
*/
void help_quicksort(int *array, int down, int up, size_t ln)
{
	if (up > down)
	{
		int index = lomuto(array, down, up, ln);

		help_quicksort(array, down, index - 1, ln);
		help_quicksort(array, index + 1, up, ln);
	}
}
/**
 * lomuto - Lomuto partition scheme
 * @array: array
 * @down: lower index
 * @up: higher index
 * @size: size of the array
 * Return: pivot
*/
int lomuto(int *array, int down, int up, size_t size)
{
	int pivot = array[up];
	int i = down - 1, tmp;
	int k = down;

	while (k < up)
	{
		if (array[k] <= pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
			if (i != k)
			{
				print_array(array, size);
			}
		}
		k++;
	}
	tmp = array[i + 1];
	array[i + 1] = array[up];
	array[up] = tmp;
	if (i + 1 != k)
	{
		print_array(array, size);
	}
	return (i + 1);
}
