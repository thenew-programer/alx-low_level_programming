#include "lists.h"

/**
* pop_listint - pop a.k.a remove a node from the beginning
* of the listint.
* @head: pointer to pointer that poi..
* Return: the poped off value.
*/

int pop_listint(listint_t **head)
{
	int popedValue;
	listint_t *tmp;

	if (!*head)
		return (0);

	tmp = *head;
	popedValue = tmp->n;
	tmp = tmp->next;
	free(*head);
	*head = tmp;
	return (popedValue);
}
