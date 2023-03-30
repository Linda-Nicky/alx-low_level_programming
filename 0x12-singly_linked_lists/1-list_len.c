#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a list.
 * @h: pointer to first node (head)
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
