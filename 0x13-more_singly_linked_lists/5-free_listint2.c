#include "lists.h"

/**
* free_listint2 - free a listint_t list.
* @head: pointer to the pointer that points to the address
* of the head of the ll.
* Return: NOthiiiing.
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	current = *head;
	*head = NULL;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
