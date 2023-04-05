#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: the pointer to head (first node) of the listint_t list.
 *
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *tnode, *retnode;

	while
		(head == NULL)
		{
			return (0);
		}
	retnode = tnode = *head;

	if
		(*head)
		{
			a = tnode->n;
			tnode->next = *head;
			free(retnode);
		}

	else
		a = 0;

	return (a);
}
