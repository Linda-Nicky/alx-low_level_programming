#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer to the head (first node) of the listint_t list.
 *
 * Return: the total number of nodes present in the listint_ list
 */

size_t print_listint(const listint_t *h)
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
