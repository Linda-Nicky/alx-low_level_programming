#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer to the head (first node) of the listint_t list
 *
 * Return: void on success
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;
	while
		(head)

	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}

}
