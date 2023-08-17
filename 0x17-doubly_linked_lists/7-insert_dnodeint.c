#include "lists.h"

/**
 * insert_dnodeint_at_index - it does what it says
 * @h: pointer to head of the dll
 * @idx: position where we gonna insert
 * @n: data
 * Return: the addr of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	size_t len, i;

	tmp = *h;
	len = 0;
	while (tmp)
		tmp = tmp->next, len++;
	if (idx > len)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = new->prev = NULL;
	if (!h || !*h)
		*h = new;
	else if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	else if (idx == len - 1)
	{
		add_dnodeint_end(h, n);
	}
	else
	{
		tmp = *h;
		for (i = 0; i < idx; i++)
			tmp = tmp->next;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev = new;
		new->prev->next = new;
	}
	return (new);
}
