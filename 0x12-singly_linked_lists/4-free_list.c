#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: the singly linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
