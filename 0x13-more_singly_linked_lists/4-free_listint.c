#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the singly linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
