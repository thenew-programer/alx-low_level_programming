#include "lists.h"

/**
* insert_nodeint_at_index - insert a new node at a given position.
* @head: pointer to pointer that points...
* @idx: position.
* @n: data.
* Return: created node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp;
	unsigned int i = 0;

	if (!*head && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		tmp = *head;
		for (; i < idx - 1 && tmp; i++)
			tmp = tmp->next;

		if (!tmp)
			return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
