#include "lists.h"

#define SUCCEED 1
#define FAILS -1
/**
* delete_nodeint_at_index - delete a node at a given index.
* @head: pointer to pointer that points...
* @index: position
* Return: 1 if succeed -1 otherwise.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *tmp;

	current = *head;
	if (!*head)
		return (-1);

	if (index == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		return (1);
	}

	for (i = 0; (i < index) && (current->next); i++)
	{
		tmp = current;
		current = current->next;
	}

	if (current)
	{
		tmp->next = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
