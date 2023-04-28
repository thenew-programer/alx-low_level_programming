#include "lists.h"

/**
* add_node_end - adds a new node at the end of the ll.
* @head: pointer to the head of the list
* @str: the string
* Return: node created
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (!*head)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	lastNode = *head;
	while (lastNode->next)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = newNode;
	newNode->next = NULL;
	return (newNode);
}
