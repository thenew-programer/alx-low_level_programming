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
	dlistint_t *new, *tmp, *position_before;
	size_t len, i;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = new->prev = NULL, tmp = *h, len = 0;
	while (tmp)
		tmp = tmp->next, len++;
	if (idx > len - 1)
	{
		free(new);
		return (NULL);
	}
	if (!h || !*h)
		*h = new;
	else if (idx == 0)
	{
		add_dnodeint(h, n);
		/*
		if (!add_dnodeint(h, n))
		{
			free(new);
			return (NULL);
		}
		*/
	}
	else if (idx == len - 1)
	{
		add_dnodeint_end(h, n);
		/*
		if (!add_dnodeint_end(h, n))
		{
			free(new);
			return (NULL);
		}
		*/
	}
	else
	{
		tmp = *h;
		for (i = 0; i < idx; i++)
			tmp = tmp->next;
		position_before = tmp->prev;
		position_before->next = tmp->prev = new;
		new->next = tmp, new->prev = position_before;
	}
	return (new);
}
