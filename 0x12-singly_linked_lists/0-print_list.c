#include "lists.h"

/**
* print_list - prints a linked list
* @h: pointer to the first element of the list
* Return: Number of nodes
*/


size_t print_list(const list_t *h)
{
	size_t numberOfNodes;

	numberOfNodes = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", 0);
			numberOfNodes++;
			h = h->next;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		numberOfNodes++;
		h = h->next;
	}
	return (numberOfNodes);
}
