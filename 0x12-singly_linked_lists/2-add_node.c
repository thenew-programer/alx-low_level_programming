#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: pointer to the head of the linked list.
* @str: the string
* Return: pointer to the created node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
