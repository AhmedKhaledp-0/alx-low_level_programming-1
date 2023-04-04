#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t
 * list.
 * @head: previous element in the list
 * @n: number to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (last == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new_node;
	}

	return (new_node);
}
