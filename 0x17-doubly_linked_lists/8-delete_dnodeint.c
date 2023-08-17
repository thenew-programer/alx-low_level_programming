#include "lists.h"

#define SUCCESS 1
#define FAILURE -1

/**
 * delete_dnodeint_at_index - it does what it says
 * @head: pointer to head of the dll
 * @index: position we want to delete at
 * Return: 1 On Success -1 On Failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (!h || !(*h))
	{
		return (FAILURE);
	}
	else
	{
		temp = *h;
		while (index != i++ && temp)
			temp = temp->next;
		if (!temp)
			return (FAILURE);
		if (temp->next)
			temp->next->prev = temp->prev;
		if (index == 0)
			*h = temp->next;
		else
			temp->prev->next = temp->next;
		free(temp);
		return (SUCCESS);
	}
	return (FAILURE);
}
