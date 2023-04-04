#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 *
 * @head: singlyy linked link
 * if the linked list is empty return 0
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	if (temp == NULL)
		return (0);

	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
