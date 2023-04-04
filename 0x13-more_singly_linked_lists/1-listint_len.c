#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: the head (first node) of the listint_t list.
 *
 * Return: the total number of elements present in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		/**
		 * increment
		 */

		element = element + 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (element);
}
