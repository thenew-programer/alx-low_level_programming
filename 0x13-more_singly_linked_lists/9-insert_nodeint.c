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
	listint_t *newNode, *tmp, *current;
	unsigned int i;


	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	current = *head;
	for (i = 0; (i < idx) && (current); i++)
	{
		tmp = current;
		current = current->next;
	}

	if (!current)
		return (NULL);

	newNode->next = current;
	tmp->next = newNode;

	return (newNode);
}
