#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: a pointer to the head (first node) of the listint_t list.
 * @n: integer to be contained in the new node added at the beginning.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = *head;

	new_node = malloc(sizeof(listint_t));
	if
		(new_node == NULL)
		{
			return (NULL);
		}
	new_node->n = n;
	*head = new_node->next;
	*head = new_node;
		
	return (new_node);
}
