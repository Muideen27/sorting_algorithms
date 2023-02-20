#include "sort.h"
/**
 * partition - function to split the array to smaller pieces
 * @array: the array to sort
 * @low_index: lower index of split array
 * @high_index: higher index of split array
 * @size: size of the full array
 * Return: none
*/
int partition(int *array, int low_index, int high_index, size_t size)
{
	int i, j, pivot_element, temp;

	pivot_element = array[high_index];
	i = (low_index - 1);
	for (j = low_index; j < high_index; j++)
	{
		if (array[j] <= pivot_element)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (pivot_element < array[i + 1])
	{
		temp = array[i + 1];
		array[i + 1] = array[high_index];
		array[high_index] = temp;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quickSort - function to sort an array using the quick sort algorithm
 * @array: array to sort
 * @low_index: lower index of split array
 * @high_index: higher index of split array
 * @size: size of array
 * Return: none
*/
void quickSort(int *array, int low_index, int high_index, size_t size)
{
	int pivot;

	if (low_index < high_index)
	{
		pivot = partition(array, low_index, high_index, size);
		quickSort(array, low_index, pivot - 1, size);
		quickSort(array, pivot + 1, high_index, size);
	}
}

/**
 * quick_sort - function to parse the array and pass it\
 * to another sorting function
 * @array: array to be sorted
 * @size: size of array
 * Return: none
*/
void quick_sort(int *array, size_t size)
{
	int low_index, high_index;

	low_index = 0;
	high_index = size - 1;
	if (size < 2 || array == NULL)
		return;
	quickSort(array, low_index, high_index, size);
}
