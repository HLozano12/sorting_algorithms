#include "sort.h"

/**
 * insertion_sort_list - Prototype for insertion Sorting
 * @list: To be printe each time you swap two elements
 *
 * Return: voided
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now, *before, *change;

	if (list == NULL || *list == NULL)
		return;

	if (((*list)->next) == NULL)
		return;
	before = (*list);
	now = before->next;

	while (now)
	{
		before = now->prev;
		change = before;
		while (now->n < before->n)
		{
			before->next = now->next;
			now->prev = before->prev;
			if (before->prev)
				before->prev->next = now;
			if (now->next)
				now->next->prev = before;
			now->next = before;
			before->prev = now;
			if (now->prev)
				before = now->prev;
			else
			{
				(*list) = now;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		if (now->n < change->n)
			now = change->next;
		else if (change->next)
			now = change->next->next;
		else
			now = change->next;
	}
}
