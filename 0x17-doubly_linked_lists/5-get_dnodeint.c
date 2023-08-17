#include "lists.h"

/**
 * get_dnodeint_at_index -  it does what is says
 * @head: pointer to head of dll
 * @index: position of node that we want
 * Return: wanted node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	dlistint_t *tmp;
	size_t len;
	size_t i;
	/*
	len = dlistint_len(head);
	*/


	tmp = head;
	len = 0;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (index > len)
	{
		return (NULL);
	}

	node = head;
	for (i = 0; i < index; i++)
	{
		node = node->next;
	}
	return (node);
}
