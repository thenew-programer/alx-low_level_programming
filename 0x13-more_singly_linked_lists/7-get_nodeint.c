#include "lists.h"

/**
* get_nodeint_at_index - returnt the nth node of a listint_t.
* @head: pointer.
* @index: nth position.
* Return: the node at nth position.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i < index) && (head); i++)
	{
		head = head->next;
	}
	return (head);
}
