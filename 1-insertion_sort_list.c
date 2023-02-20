#include "sort.h"
/**
 * insertion_sort_list - sort a doubly linked list using\
 * the insertion sort algorithm
 * @list: Pointer to pointer of head of the list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *new, *other;

	if (!list || !(*list) || !(*list)->next)
		return;
	other = *list;
	new = *list;
	other = other->next;
	while (other != NULL)
	{
		new = other;
		other = other->next;
		while (new->prev != NULL && new->n < new->prev->n)
		{
			if (new->next != NULL)
				new->next->prev = new->prev;
			if (new->prev->prev != NULL)
				new->prev->prev->next = new;
			else
				*list = new;
			new->prev->next = new->next;
			new->next = new->prev;
			temp = new->prev->prev;
			new->prev->prev = new;
			new->prev = temp;
			print_list(*list);
		}
	}
}
