#include "sort.h"

/**
 * bubble_sort - function that uses bubble sort to sort an array
 * @array: array of numbers to sort
 * @size: size of array
 * Return: none
*/
void bubble_sort(int *array, size_t size)
{
	int temp, check;
	size_t j;

	check = 1;
	if (array == NULL || size < 2)
		return;
	while (check != 0)
	{
		check = 0;
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				check = 1;
				print_array(array, size);
			}
	}
}
