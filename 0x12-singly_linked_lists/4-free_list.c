#include "lists.h"

/**
* free_list - frees a list_t list.
* @head: pointer to the head of the list
* Return: nothing.
*/

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
