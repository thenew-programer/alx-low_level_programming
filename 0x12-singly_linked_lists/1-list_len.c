#include "lists.h"

/**
* list_len - return the number of elements in a linked list_t list.
* @h: pointer to the head of the list.
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t numberOfNodes;

	numberOfNodes = 0;
	while (h)
	{
		h = h->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
}
