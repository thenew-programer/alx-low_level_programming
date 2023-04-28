#include "lists.h"

/**
* add_nodeint_end - adds anew node at the end of a...
* @head: pointer to the pointer that points to the ...
* @n: the data.
* Return: node created.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	/* Give some memory to the node */
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	/* Fill in the node with the given data (n)*/
	newNode->n = n;

	/* Edge case = if the linked list is empty */
	if (!*head)
	{
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}

	/* loop to find the end of the ll */
	lastNode = *head;
	while (lastNode->next)
	{
		lastNode = lastNode->next;
	}

	/* Link the last node with newly created node */
	lastNode->next = newNode;
	newNode->next = NULL;

	return (newNode);
}
