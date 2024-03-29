#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: the pointer to the head (first node) of the listint_t lists.
 * @n: integer to be contained in the new node added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			/**
			 * go to next node
			 */
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}
