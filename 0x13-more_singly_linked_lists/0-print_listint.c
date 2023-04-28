#include "lists.h"
#include <stddef.h>

/**
* print_listint - prints all elements of a listint_t list.
* @h: pointer to the head of the listint_t.
* Return: lengh of the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t listLength;

	if (!h)
		return (-1);

	listLength = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		listLength++;
	}
	return (listLength);
}
