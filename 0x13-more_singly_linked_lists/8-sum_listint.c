#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: the singly linked list
 * f the list is empty, return 0
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}
