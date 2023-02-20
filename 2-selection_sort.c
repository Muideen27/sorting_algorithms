#include "sort.h"
/**
 * selection_sort - function that sorts through an array using selection sort
 * @array: the array to be sorted
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest, temp;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		smallest = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[smallest])
				smallest = j;
		if (smallest != i)
		{
		temp = array[smallest];
		array[smallest] = array[i];
		array[i] = temp;
		print_array(array, size);
		}
	}
}
