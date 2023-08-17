#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a doubly_linked_list
 * @h: pointer to the head of the dll
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	dlistint_t *tmp;

	tmp = (dlistint_t *)h;
	len = 0;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
