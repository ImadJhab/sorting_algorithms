#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *new_n;

	if (list == NULL || (*list)->next == NULL)
	{
		return;
	}
	new_n = (*list)->next;
	while (new_n)
	{
		while ((new_n->prev) && (new_n->prev->n > new_n->n))
		{
			new_n = swap(new_n, list);
			print_list(*list);
		}
		new_n = new_n->next;
	}
}
/**
 * swap - swap two nodes
 * @node: node
 * @list: list
 * Return: pointer
*/
listint_t *swap(listint_t *node, listint_t **list)
{
	listint_t *new = node->prev, *cur = node;

	new->next = cur->next;
	if (cur->next)
	{
		cur->next->prev = new;
	}
	cur->next = new;
	cur->prev = new->prev;
	new->prev = cur;
	if (cur->prev)
	{
		cur->prev->next = cur;
	}
	else
	{
		*list = cur;
	}
	return (cur);
}
