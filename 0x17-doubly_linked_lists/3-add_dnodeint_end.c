#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of dll
 * @head: pointer to head of the dll
 * @n: data
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!head || !*head)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
