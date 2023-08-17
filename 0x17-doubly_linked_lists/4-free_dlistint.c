#include "lists.h"

/**
 * free_dlistint - free a dll
 * @head: pointer to head of dll
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
