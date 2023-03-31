#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: singly linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
