#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list.
* @h: pointer.
* Return: the length.
*/

size_t listint_len(const listint_t *h)
{
	size_t listLength;

	listLength = 0;
	while (h)
	{
		listLength++;
		h = h->next;
	}

	return (listLength);
}
