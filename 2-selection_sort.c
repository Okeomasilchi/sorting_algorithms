#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 *					order using the selection sort algorithm.
 * @array: Pointer to the first element of an array of integers.
 * @size: The size of the array, which is the number of
 *			elements in the array.
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	size_t pos, i, j;
	int tmp;

	if (!array || !array[1])
	{
		return;
	}
	for (i = 0; i < (size - 1); i++)
	{
		pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[pos])
				pos = j;
		}
		if (pos != i)
		{
			tmp = array[i];
			array[i] = array[pos];
			array[pos] = tmp;
			print_array(array, size);
		}
	}
}
