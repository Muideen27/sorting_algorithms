#include "sort.h"
// Main Function
int main()
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array)/sizeof(array[0]);
	print_array(array, n);
	printf("\n");
	quick_sort(array, n);
	printf("\n");
	print_array(array, n);
    return 0;
}
// Function to print the elements of an array
void print_array(int *array, size_t size)
{
	size_t i;

	i = 0;
	while(array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
// print list function
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while(list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
