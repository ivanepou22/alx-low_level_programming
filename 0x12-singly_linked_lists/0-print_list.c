#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print all elements of a linked list
 * @h: pointer to linked list
 * Return: number of nodes in linked list
 **/
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	printf("[%u] %s\n", h->len, h->str);

	if (h->next != NULL)
		return (print_list(h->next) + 1);
	return (1);
}
