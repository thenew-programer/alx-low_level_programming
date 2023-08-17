#include "lists.h"

/**
 * print_dlistint - function that prints a dll
 * @h: pointer to the head of dll
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t lenght;

	tmp = h;
	lenght = 0;
	while(tmp)
	{
		printf("%d\n", tmp->n);
		lenght++;
		tmp = tmp->next;
	}
	return lenght;
}
