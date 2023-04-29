#include "lists.h"

/**
* free_listint - frees a ll.
* @head: address of the head of the ll.
* Return: void.
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
