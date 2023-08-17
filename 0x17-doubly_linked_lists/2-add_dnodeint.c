#include "lists.h"

/**
* add_dnodeint - add node at the begin of dll
* @head: pointer to head of the dll
* @n: data
* Return: pointer to new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->prev = NULL;
	new->n = (int)n;
	if (!head || !*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	tmp->prev = new;
	*head = new;
	new->next = tmp;
	return (new);
}
